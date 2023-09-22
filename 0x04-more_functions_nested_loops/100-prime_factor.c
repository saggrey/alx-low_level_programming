#include <stdio.h>

/**
 * main -  calculate the largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int ty;

	for (ty = 2; ty < x; ty++)
	{
		if (x % ty == 0)
		{
			x = x / ty;
		}
	}
	printf("%ld\n", ty);
	return (0);
}
