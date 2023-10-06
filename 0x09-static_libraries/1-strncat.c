#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int x = 0;

	while (x < n && *src)
	{
		dest[index + x] = *src;
		src++;
		x++;
	}
	dest[index + x] = '\0';
	return (dest);
}
