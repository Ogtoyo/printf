#include "main.h"

/**
 * _putchr - to print
 *@c: the charcter
 *
 * Return: Always 0 (success)
 */

int _putchr(char c)
{
	return (write(1, &c, 1));

}
