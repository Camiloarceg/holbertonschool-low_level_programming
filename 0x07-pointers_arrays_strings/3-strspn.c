#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 *@s: the string to review
 *@accept: string with chars accepted
 *
 * Return: the number of bytes in the initial segment of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, m;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (m = 0 ; accept[m] != s[i] ; m++)
		{
			if (accept[m] == '\0')
				return (i);
		}
	}
	return (i);
}
