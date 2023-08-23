#include "main.h"
#include <stdio.h>

/**
 * _strlen - this is length of str
 * @str: this is string
 * Return: length of str
 **/
int _strlen(const char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
		;

	return (n);
}

/**
 * print - function that print char.
 * @str: its a string.
 * Return: length of str.
 */

int print(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; ++n)
		putchar(str[n]);

	return (n);
}
