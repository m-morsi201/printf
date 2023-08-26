#include "main.h"

/**
 * _printf - this is a function Produces output according to a format.
 * @format: Is a string.
 * Return: The number of characters printed.
**/

int _printf(const char *format, ...)
{
	int n, t, t_fun;
	va_list argus;

	n = 0;
	t = 0;

	va_start(argus, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[n])
	{
		t_fun = 0;
		if (format[n] == '%')
		{
			if (!format[n + 1] || (format[n + 1] == ' ' && !format[n + 2]))
			{
				t = -1;
				break;
			}
			t_fun += _handel(format[n + 1], argus);
			if (t_fun == 0)
				t += _putchar(format[n + 1]);
			if (t_fun == -1)
				t = -1;
			n++;
		}
		else
		{
			(t == -1) ? (_putchar(format[n])) : (t += _putchar(format[n]));
		}
		n++;
		if (t != -1)
			t += t_fun;
	}
	va_end(argus);
	return (t);
}
