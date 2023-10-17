#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct op - structure
 * @format: the format specifier('s', etc)
 * @printf_func: A pointer to the corresponding print function
*/

struct op
{
	char format;
	int (*printf_func)(va_list);
};

typedef struct op PrintFunc;


/*Functions*/
int _printf(const char *format, ...);
int _putchr(char c);
void get_printf_functions(PrintFunc *functions);
int printf_str(va_list args);
int printf_chr(va_list args);
int printf_percent(va_list args);
int printf_integer(va_list args);
int printf_digit(va_list args);

#endif
