#include "main.h"
#include <stdio.h>

/**
 * _handel -it is to handel function.
 * @con_form: this is String.
 * @argus: this is List of arguments.
 * Return: arguments and string.
*/

int _handel(char con_form, va_list argus)
{
	int n = 0;
	int t_fun = 0;

	format_t form[] = {
		{'c', print_ch},
		{'s', print_str},
		{'%', print_mod},
		{'d', print_digt},
		{'i', print_digt},
		{'r', print_rev_str},
		{0, NULL}
	};

	while (form[n].format)
	{
		if (con_form == form[n].format)
			t_fun += form[n].f(argus);
		n++;
	}

	if (t_fun == 0)
	{
		t_fun += _putchar('%');
		t_fun += _putchar(con_form);
	}

	return (t_fun);
}
