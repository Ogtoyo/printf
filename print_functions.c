#include "main.h"

/**
 * get_printf_functions - Initializes an array of print functions.
 * @functions: An array of PrintFunc structures to initialize.
 *
 * Description: This function initializes an array of print functions.
 *
 * Return: This function does not return a value.
 */

void get_printf_functions(PrintFunc *functions)
{
	PrintFunc func[] = {
		{'s', printf_str},
		{'c', printf_chr},
		{'%', printf_percent},
		{'i', printf_integer},
		{'d', printf_digit},
		{'b', printf_binary},
		{'x', printf_hex_low},
		{'X', printf_hex_upper},
		{'u', printf_unsigned},
		{'o', printf_octal},
		{'p', printf_pointer},
		{0, NULL}
	};

	int i;

	for (i = 0; i < 12; i++)
	{
		functions[i] = func[i];
	}
}
