#include "main.h"

/**
 * printf_integer - Print an integer.
 * @args: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int printf_integer(va_list args)
{
	int num = va_arg(args, int);
	int count = 0, divisor = 1;

	if (num == 0)
	{
		_putchr('0');
		count++;
	}
	else
	{
		if (num < 0)
		{
			_putchr('-');
			count++;
			num = -num;
		}

		while (divisor <= num / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchr('0' + num / divisor);
			count++;
			num %= divisor;
			divisor /= 10;
		}
	}
	return (count);
}

/**
 * printf_digit - Print a single digit character.
 * @args: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int printf_digit(va_list args)
{
	int num = va_arg(args, int);
	int count = 0, divisor = 1;

	if (num == 0)
	{
		_putchr('0');
		count++;
	}

	else
	{
		if (num < 0)
		{
			_putchr('-');
			count++;
			num = -num;
		}

		while (divisor <= num / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			_putchr('0' + num / divisor);
			count++;
			num %= divisor;
			divisor /= 10;
		}
	}
	return (count);
}
