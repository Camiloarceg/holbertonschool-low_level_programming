#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *@s: the string
 *@accept: the bytes accepted
 *
 * Return: a pointer to the byte found to match with accepted.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, m;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (m = 0 ; accept[m] != '\0' ; m++)
		{
			if (accept[m] == s[i])
				break;
		}
		if (accept[m] == s[i])
			break;
	}
	if (accept[m] == s[i])
	{
		s = &s[i];
		return (s);
	}
	return ('\0');
}
