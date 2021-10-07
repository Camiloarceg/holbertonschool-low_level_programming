#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *  followed by a new line.
 *
 *  Return: void.
 */
void more_numbers(void)
{
	int i, m, n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (m = 0 ; m <= 14 ; m++)
		{
			n = 0;
			if (m < 10)
			{
				n = 1;
				m = m * 10;
			}
			_putchar((m / 10) + '0');
			if (n == 1)
				m = m / 10;
			if (m > 9)
				_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
