#include "main.h"

/**
 * _putchr - to print
 *@c: the charcter
 @buf_ptr: Pointer to a character buffer.
 *
 * Return: Always 0 (success)
 */

int _putchr(char c, char **buf_ptr)
{
	**buf_ptr = c;
	(*buf_ptr)++;
	return (1);
}
