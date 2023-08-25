#include "main.h"
#include <stdio.h>

/**
 * _handel - handel function.
 * @str: this is String.
 * @list: this is List of arguments.
 * Return: arguments and string.
*/

int _handel(const char *format, va_list list)
{
	int s, n, x;

	s = 0;
	for (n = 0; format[n] != 0; n++)
	{
		if (format[n] == '%')
		{
			x = per_handel(format, list, &n);
			if (x == -1)
				return (-1);

			s += x;
			continue;
		}
		putchar(format[n]);
		s = s + 1;
	}
	return (s);
}

/**
 * per_handel - it handel percent format.
 * @str: sting.
 * @list: it is list.
 * @n : for return.
 * Return: string.
*/

int per_handel(const char *format, va_list list, int *n)
{
	int s, b, num_format;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*n = *n + 1;

	if (format[*n] == '\0')
		return (-1);

	if (format[*n] == '%')
	{
		putchar('%');
		return (1);
	}

	num_format = sizeof(formats) / sizeof(formats[0]);
	for (s = b = 0; b < num_format; b++)
	{
		if (format[*n] == formats[b].type)
		{
			s = formats[b].f(list);
			return (s);
		}

	}

	putchar('%'), putchar(foramt[*n]);

	return (2);
}
