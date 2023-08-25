#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _strlen(const char *);
int _printf(const char *, ...);
int _printf(const char *format, ...);
int handel(const char *, va_list);
int per_handel(const char *, va_list, int *);

typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif
