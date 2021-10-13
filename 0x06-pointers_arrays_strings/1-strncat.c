#include "main.h"
/**
 * _strncat - concatenates two strings.
 *@dest: string 1
 *@src: string 2
 *@n: bytes from src.
 *
 * Return: The concatenaded string
 */
char *_strncat(char *dest, char *src,  int n)
{
	int i, m;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (m = 0 ; (src[m] != '\0') && (m < n) ; m++)
	{
		dest[i] = src[m];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
