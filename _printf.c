#include "main.h"
#include "stdio.h"

/**
 * _printf - this is a function Produces output according to a format
 * @format: Is a string.
 * Return: The number of characters printed
 **/
int _printf(const char *format, ...)
{
	int s;
	va_list args;

	if (format == NULL)
		return (-1);

	s = _strlen(format);
	if (s <= 0)
		return (0);

	va_start(args, format);
	s = handler(format, args);

	putchar(-1);
	va_end(args);

	return (s);
}
