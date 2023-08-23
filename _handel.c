#include "main.h"
#include "stdio.h"

/**
 * _handel - handel function.
 * @str: this is String.
 * @list: this is List of arguments.
 * Return: arguments and string.
*/

int _handel(const char *str, va_list list)
{
	int s, n, x;

	s = 0;
	for (n = 0; str[n] != 0; n++)
	{
		if (str[n] == '%')
		{
			x = per_handel(str, list, &n);
			if (x == -1)
				return (-1);

			s += x;
			continue;
		}
		putchar(str[n]);
		s = s + 1;
	}
	return (s);
}

/**
 * per_handel - handel percent format.
 * @str: this is a string.
 * @list: this is a List of arguments.
 * @n:this for iterat.
 * Return: elements that was print.
*/

int per_handel(const char *str, va_list list, int *n)
{
	int s, m, num_format;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*n = *n + 1;

	if (str[*n] == '\0')
		return (-1);

	if (str[*n] == '%')
	{
		putchar('%');
		return (1);
	}

	num_format = sizeof(formats) / sizeof(formats[0]);
	for (s = m = 0; m < num_format; m++)
	{
		if (str[*n] == formats[m].type)
		{
			s = formats[m].f(list);
			return (s);
		}

	}

	putchar('%'), putchar(str[*n]);

	return (2);
}
