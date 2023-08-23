#include "main.h"
#include <stdio.h>

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
