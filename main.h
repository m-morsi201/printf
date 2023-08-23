#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(const char *);
int _handel(const char *, va_list);
int per_handel(const char *, va_list, int *);
int print(char *);
int _printf(const char *, ...);

#endif
