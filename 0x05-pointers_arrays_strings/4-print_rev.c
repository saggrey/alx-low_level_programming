#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int x = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
