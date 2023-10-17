#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

typedef int (*PrintfFunc)(va_list, char **);

/**
 * struct op - structure
 * @format: the format specifier('s', etc)
 * @printf_func: A pointer to the corresponding print function
*/

struct op
{
	char format;
	PrintfFunc printf_func;
};

typedef struct op PrintFunc;


/*Functions*/
int _printf(const char *format, ...);
int _putchr(char c, char **buf_ptr);
void get_printf_functions(PrintFunc *functions);
int printf_str(va_list args, char **buf_ptr);
int printf_chr(va_list args, char **buf_ptr);
int printf_percent(va_list args, char **buf_ptr);
int printf_integer(va_list args, char **buf_ptr);
int printf_digit(va_list args, char **buf_ptr);
int printf_binary(va_list args, char **buf_ptr);
int printf_hex_low(va_list args, char **buf_ptr);
int printf_hex_upper(va_list args, char **buf_ptr);
int printf_octal(va_list args, char **buf_ptr);
int printf_unsigned(va_list args, char **buf_ptr);

#endif
