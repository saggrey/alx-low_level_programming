#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 *
 * Rturn 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	for (; letter <= 'z';)
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
