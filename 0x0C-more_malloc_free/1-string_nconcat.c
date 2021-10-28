#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
	unsigned int len1, len2, i, j;
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
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p != NULL)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			p[i] = s1[i];
		for (j = 0 ; j < len2 ; j++)
			p[i + j] = s2[j];
		p[i + j] = '\0';
		return (p);
	}
	else
		return (NULL);
}
