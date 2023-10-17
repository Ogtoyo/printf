#include "main.h"

/**
 * printf_str - Print a string.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_str(va_list args, char **buf_ptr)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchr(*str++, buf_ptr);
		count++;
	}

	return (count);
}


/**
 * printf_chr - Print a character.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_chr(va_list args, char **buf_ptr)
{
	char c = va_arg(args, int);

	_putchr(c, buf_ptr);
	return (1);
}

/**
 * printf_percent - Print a percent symbol.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_percent(va_list args, char **buf_ptr)
{
	(void)args;
	_putchr('%', buf_ptr);
	return (1);
}
