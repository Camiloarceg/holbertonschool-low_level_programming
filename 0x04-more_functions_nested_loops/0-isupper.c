#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: int to evaluate
 *
 * Return: 1 if upper 0 otherwise
 */

int _isupper(int c)
{
	int i, m;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == c)
		{
			m = 1;
			break;
		}
		if (i == 'Z')
		{
			m = 0;
		}
	}
	return (m);
}

