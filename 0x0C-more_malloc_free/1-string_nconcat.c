#include <stdlib.h>
#include "main.h"
/**
 * elmayor - return the greater int.
 *@len1: int 1
 *@len2: int 2
 *
 * Return: the greater
 */
unsigned int elmayor(int len1, int len2)
{
	if (len1 > len2)
		return (len1 + 1);
	else
		return (len2 + 1);
	return (0);
}
/**
 * string_nconcat - concatenates two strings.
 *@s1: 1 string
 *@s2: 2 string
 *@n: n first bytes of s2
 *
 * Return: a pointer to the new allocated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
	{}
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
	{}
	if (n < len2)
		len2 = n;
	p = malloc(sizeof(*p) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < elmayor(len1, len2) ; i++)
	{
		if (i < len1)
			p[i] = s1[i];
		if (i < len2)
			p[len1 + i] = s2[i];
		if (i == len2)
			p[len1 + i] = '\0';
	}
	return (p);
}
