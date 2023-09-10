#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The code prints the last digit of the number stored in the variable
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
		int n, last;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				last = n % 10;
				if (last > 5)
				{
					printf("Last digit of %i is %i and is greater than 5\n", n, last);
				}

				else if (last == 0)
				{
				printf("Last digit of %i is %i and is 0\n", n, last);
				}

				else
				{
					printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
				}
					return (0);
}
