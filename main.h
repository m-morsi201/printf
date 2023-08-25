#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _strlen(const char *str);
int _printf(const char *, ...);
int _printf(const char *format, ...);
int _handel(const char *str, va_list);
int per_handel(const char *str, va_list, int *n);
int print(char *str);

/**
 * struct _format - it is a data type struct.
 * @type: it is a Format.
 * @f: it is a function.
*/

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
