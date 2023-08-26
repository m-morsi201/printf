#include "main.h"

/**
 * print_digt - it is a function to print a digt.
 * @argus: it is an argument .
 * Return: (t_function).
*/

int print_digt(va_list argus)
{
	int d;
	int t_fun;
	long int digts = va_arg(argus, int);
	long int digtx;

	d = 1;
	t_fun = 0;

	if (digts < 0)
	{
		t_fun += _putchar('-');
		digts *= -1;
	}

	if (digts < 10)
		return (t_fun += _putchar(digts + '0'));

	digtx = digts;

	while (digtx > 9)
	{
		d *= 10;
		digtx /= 10;
	}
	while (d >= 1)
	{
		t_fun += _putchar(((digts / d) % 10) + '0');
		d /= 10;
	}

	return (t_fun);
}
