#include "main.h"

/**
 * printf_hex_low - Print a number in lowercase hexadecimal format.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_hex_low(va_list args, char **buf_ptr)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i = 0, j, remainder;
	char hexDigits[] = "0123456789abcdef", hex[8];

	if (num == 0)
	{
		_putchr('0', buf_ptr);
		return (1);
	}

	while (num > 0)
	{
		remainder = num % 16;
		hex[i] = hexDigits[remainder];
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchr(hex[j], buf_ptr);
		count++;
	}

	return (count);
}


/**
 * printf_hex_upper - Print a number in uppercase hexadecimal format.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_hex_upper(va_list args, char **buf_ptr)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i = 0, j, remainder;
	char hexDigits[] = "0123456789ABCDEF", hex[8];

	if (num == 0)
	{
		_putchr('0', buf_ptr);
		return (1);
	}

	while (num > 0)
	{
		remainder = num % 16;
		hex[i] = hexDigits[remainder];
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchr(hex[j], buf_ptr);
		count++;
	}

	return (count);
}


/**
 * printf_unsigned - Print an unsigned integer.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_unsigned(va_list args, char **buf_ptr)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	unsigned int divisor;

	if (num == 0)
	{
		_putchr('0', buf_ptr);
		return (1);
	}

	divisor = 1;
	while (divisor <= num / 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchr('0' + num / divisor, buf_ptr);
		count++;
		num %= divisor;
		divisor /= 10;
	}

	return (count);
}


/**
 * printf_octal - Print a number in octal format.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to a character buffer.
 *
 * Return: The number of characters printed.
 */
int printf_octal(va_list args, char **buf_ptr)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i;
	char octal[32];

	if (num == 0)
	{
		_putchr('0', buf_ptr);
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		octal[i] = '0' + (num % 8);
		num /= 8;
	}

	for (i--; i >= 0; i--)
	{
		_putchr(octal[i], buf_ptr);
		count++;
	}

	return (count);
}
