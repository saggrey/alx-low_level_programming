#include <stdio.h>

/**
 * main - Use 'putchar' function to print the alphabet in lowercase..
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
