#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: the string to use.
 */

void puts2(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
		y++;
	}
	_putchar('\n');
}
