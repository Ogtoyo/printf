#include "main.h"

void get_printf_functions(PrintFunc *functions)
{
	PrintFunc func[] = {
		{'s', printf_str},
		{'c', printf_chr},
		{'%', printf_percent},
		{0, NULL}
	};

	int i;

	for (i = 0; i < 4; i++)
	{
		functions[i] = func[i];
	}
}
