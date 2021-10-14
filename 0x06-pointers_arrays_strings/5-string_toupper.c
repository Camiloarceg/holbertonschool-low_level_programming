#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: string to changes
 *
 * Return: the string changed.
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		if (*s >= 97 && *s < 122)
		{
			*s = *s - 32;
		}
		count += 1;
		s++;
	}
	while (count > 0)
	{
		s--;
		count--;
	}
	return (s);
}
