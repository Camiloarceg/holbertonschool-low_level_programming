#include "main.h"
#include <stdlib.h>
/**
 * elmayor - return the greater int.
 *@len1: int 1
 *@len2: int 2
 *
 * Return: the greater
 */
int elmayor(int len1, int len2)
{
	if (len1 > len2)
		return (len1 + 1);
	else
		return (len2 + 1);
	return (0);
}
/**
 * str_concat - concatenates two strings.
 *@s1: 1 string
 *@s2: 2 string
 *
 * Return: the string concatenaded
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char  *p;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (len1 = 0 ; s1[len1] != '\0' ; len1++)
	{}
	for (len2 = 0 ; s2[len2] != '\0' ; len2++)
	{}
	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (p == 0)
		return (0);
	for (i = 0 ; i < elmayor(len1, len2) ; i++)
	{
		if (i <= len1)
			p[i] = s1[i];
		if (i <= len2)
			p[len1 + i] = s2[i];
	}
	return (p);
}
