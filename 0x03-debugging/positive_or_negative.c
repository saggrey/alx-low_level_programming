#include "main.h"
/**
 * Determine if number is positive, negative or zero
 * 0 : is the number to be checked for
 * Return: 0 is success
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
