#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _strlen(const char *format);
int _printf(const char *, ...);
int _printf(const char *format, ...);
int _handel(char con_spec, va_list args);
int per_handel(const char *format, va_list, int *n);
int print(char *format);
int print_ch(va_list argus);
int print_str(va_list argus);
int print_digt(va_list argus);
int print_mod(va_list argus);
int print_rev_str(va_list argus);
int _putchar(char c);

/**
 * struct format - it is a data type struct.
 * @format: it is a Format.
 * @f: it is a function.
*/

typedef struct format
{
	char format;
	int (*f)(va_list);
} format_t;

#endif
