#include "main.h"

/**
 * print_ch - it is a function to print a char.
 * @argus: it is an argument.
 * Return:(1).
*/

int print_ch(va_list argus)
{
	char ch;

	ch = va_arg(argus, int);

	_putchar(ch);

	return (1);
}
