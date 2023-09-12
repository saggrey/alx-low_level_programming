#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int h;

	for (h = 48; h < 58; h++)
	{
		putchar(h);
	}
	for (h = 97; h <= 103; h++)
	{
		putchar(h);
}
putchar('\n');
return (0);
}
