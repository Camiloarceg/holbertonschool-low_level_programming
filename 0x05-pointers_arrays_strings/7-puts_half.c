#include "main.h"
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
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (n < i)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
