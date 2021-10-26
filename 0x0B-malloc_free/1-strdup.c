#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *@str: the string to be dup
 *
 * Return: the pointer to the dup
 */
char *_strdup(char *str)
{
	int i, m;
	char *p;

	if (str == 0)
		return (0);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}
	m = i;
	p = (char *)malloc(i * sizeof(char) + 1);
	if (p == 0)
		return (0);
	for (i = 0 ; i <= m ; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
