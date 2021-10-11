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
 * print_rev - prints a string, in reverse, followed by a new line.
 *@s: the string.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
