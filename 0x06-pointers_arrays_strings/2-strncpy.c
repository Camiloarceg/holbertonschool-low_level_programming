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
	int m;

	for (m = 0 ; (src[m] != '\0') && (m < n) ; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';
	return (dest);
}
