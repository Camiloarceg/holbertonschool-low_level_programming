#include "main.h"
/**
 * _strncpy - copies a string.
 *@dest: string 1
 *@src: string 2
 *@n: bytes from src.
 *
 * Return: The concatenaded string
 */
char *_strncpy(char *dest, char *src,  int n)
{
	int m, i;

	for (i = 0; src[i] != '\0' ; i++)
	{
	}
	for (m = 0 ; (src[m] != '\0') && (m < n) ; m++)
	{
		dest[m] = src[m];
	}
	if (m >= i)
	{
		while (m <= n)
		{
			dest[m] = '\0';
			m++;
		}
	}
	return (dest);
}
