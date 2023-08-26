#include "main.h"

/**
 * print_str - it is a function to print a string.
 * @argus: it is an argument.
 * Return: t_fun .
*/

int print_str(va_list argus)
{
	int n;
	int t_fun;
	char *st = va_arg(argus, char *);

	t_fun = 0;

	if (!st)
		st = "(null)";

	if (st[0] == '\0')
		return (-1);

	for (n = 0; st[n] != '\0'; n++)
		t_fun += _putchar(st[n]);

	return (t_fun);
}
