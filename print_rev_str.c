#include "main.h"

/**
 * print_rev_str - it is function to Print reverses str.
 * @argus: it return argus.
 * Return: t_fun.
*/

int print_rev_str(va_list argus)
{

	int t_fun, n;
	char *k;

	k = va_arg(argus, char *);
	t_fun = 0;
	n = 0;

	if (!k)
		k = "(null)";

	while (k[n])
	{
		n++;
	}

	while (n >= 0)
	{
		t_fun += _putchar(k[n]);
		n--;
	}

	t_fun--;
	return (t_fun);
}
