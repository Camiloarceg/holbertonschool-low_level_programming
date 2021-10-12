#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 *@str: the string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0 ; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
		n = i - n;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}

