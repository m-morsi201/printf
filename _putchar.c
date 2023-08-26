#include <unistd.h>

/**
 * _putchar - my putchar function.
 * @c: it is char to print.
 * Return: (1).
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
