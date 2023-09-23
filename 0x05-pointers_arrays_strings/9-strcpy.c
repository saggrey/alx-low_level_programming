#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including \0.
 * @src: pointer
 * @dest: pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (k = 0; k <= length ; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}
