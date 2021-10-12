#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src,
 *		including the terminating null byte (\0)
 *		, to the buffer pointed to by dest.
 *@dest: destino.
 *@src: source.
 *
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
	int i, m = 0;

	for (i = 0; src[i] != '\0' ; i++)
	{
	}
	while (m <= i)
	{
		dest[m] = src[m];
		m++;
	}
	dest[(i + 1)] = '\0';
	return (dest);
}

