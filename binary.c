#include "main.h"

/**
 * printf_binary - Print a binary representation of an integer.
 * @args: List of arguments passed to the function.
 * @buf_ptr: A pointer to the output buffer.
 *
 * Return: The number of characters printed.
 */
int printf_binary(va_list args, char **buf_ptr)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, zero = 1, i, bit;

	if (num == 0)
	{
		_putchr('0', buf_ptr);
		return (1);
	}


	for (i = (sizeof(num) * 8 - 1); i >= 0; i--)
	{
		bit = (num >> i) & 1;

		if (bit == 1)
		{
			zero = 0;
		}
		if (zero == 0)
		{
			_putchr('0' + bit, buf_ptr);
			count++;
		}
	}

	return (count);

}
