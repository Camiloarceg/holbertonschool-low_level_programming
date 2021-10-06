#include "main.h"
/**
 *_islower - a function that checks for lowercase character.
 * @c: externa char input
 *
 *
 *Return: 1 if lowercase or else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
