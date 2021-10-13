#include "main.h"
/**
 * _strcat - concatenates two strings.
 *@dest: string 1
 *@src: string 2
 *
 * Return: The concatenaded string
 */
char *_strcat(char *dest, char *src)
{
	int i, m;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (m = 0 ; src[m] != '\0'; m++)
	{
		dest[i] = src[m];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
