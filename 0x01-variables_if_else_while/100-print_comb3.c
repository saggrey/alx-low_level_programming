#include <stdio.h>

/**
 * main - A program that prints all possible different two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		i++;
	}
	e++;
}
putchar('\n');
return (0);
}