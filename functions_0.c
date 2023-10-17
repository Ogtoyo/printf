#include "main.h"

/**
 * printf_str - Print a string.
 * @args: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int printf_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	while (*str)
	{
		_putchr(*str++);
		count++;
	}
	return (count);
}


/**
 * printf_chr - Print a character.
 * @args: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int printf_chr(va_list args)
{
	char c = va_arg(args, int);

	_putchr(c);
	return (1);
}

/**
 * printf_percent - Print a percent symbol.
 * @args: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int printf_percent(va_list args)
{
	_putchr('%');
	return (1);
}
