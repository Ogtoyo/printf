#include "main.h"

/**
 * _putchr - Print a character to a buffer.
 * @c: The character to print.
 * @buf_ptr: A pointer to the output buffer.
 *
 * Return: Always 0 (success).
 */

int _putchr(char c, char **buf_ptr)
{
	**buf_ptr = c;
	(*buf_ptr)++;
	return (1);
}
