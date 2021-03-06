#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Difference between two strings
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	if (s1[i] != s2[i])
		x = s1[i] - s2[i];

	return (x);
}
