#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: pointer to dest
 *@src: pointer to src
 *@n: first n numbers to copy.
 *
 * Return: the new dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
