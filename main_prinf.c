#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that prints.
 * @format: list of types of arguments passed to the function
 * @...: Variable number of arguments to be formatted and printed.
 *
 * Return: The total number of characters printed.
*/

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(args, char *);
					while (*str)
					{
						_putchr(*str++);
						count++;
					}
					break;
				case 'c':
					_putchr(va_arg(args, int));
					count++;
					break;
				case '%':
					_putchr('%');
					count++;
					break;
			}
		}
		else
		{
			_putchr(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
