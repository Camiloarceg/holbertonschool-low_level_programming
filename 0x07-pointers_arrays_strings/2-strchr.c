#include "main.h"
/**
 * _strchr - locates a character in a string.
 *@s: the string
 *@c: the char
 *
 * Return: a new array.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	s = &s[i];
	return (s);
}
