#include "main.h"
/**
 * _strlen - returns the length of a string.
 *@s: array of chars
 *
 * Return: an int.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
	}
	return (i);
}
/**
 *rev_string - creates a string, in reverse, followed by a new line.
 *@s: the string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, m;
	int rev[1000];

	m = 0;
	i = _strlen(s);

	while (i--)
	{
		rev[m] = s[i];
		m++;
	}
	i = 0;
	while (i != m)
	{
		s[i] = rev[i];
		i++;
	}
}
