#include <stdio.h>
#include "main.h"
/**
 *_strstr -  locates a substring.
 *@haystack:char pointer
 *@needle: char variable
 *
 * Return:char pointer
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *i = haystack;
		char *m = needle;

		while (*m == *haystack && *m)
		{
			haystack++;
			m++;
		}
		if (*m == '\0')
			return (i);
		haystack = i + 1;
	}
	return ('\0');
}
