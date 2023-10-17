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
	unsigned int i = 0, j;
	int count = 0;
	PrintFunc functions[11];

	va_start(args, format);

	get_printf_functions(functions);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; functions[j].format != 0; j++)
			{
				if (format[i] == functions[j].format)
				{
					count += functions[j].printf_func(args);
					break;
				}
			}
		}
		else
		{
			count += _putchr(format[i]);
		}
	}

	va_end(args);
	return (count);
}
