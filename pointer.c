#include "main.h"

/**
 * printf_pointer - Print a pointer address.
 * @args: List of arguments passed to the function.
 * @buf_ptr: Pointer to the output buffer.
 *
 * Return: The number of characters printed.
 */
int printf_pointer(va_list args, char **buf_ptr)
{
	void *ptr = va_arg(args, void *);
	char buffer[20];
	int count = 0, i;

	sprintf(buffer, "%p", ptr);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchr(buffer[i], buf_ptr);
		count++;
	}

	return (count);
}
