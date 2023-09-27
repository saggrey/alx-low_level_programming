#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *m;

	m = _strchr(s, 'l');

	if (m != NULL)
	{
		printf("%s\n", m);
	}
	return (0);
}
