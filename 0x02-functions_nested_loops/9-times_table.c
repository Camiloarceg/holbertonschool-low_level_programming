#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: value void
 */
void times_table(void)
{
	int i, m, mult;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (m = 0 ; m <= 9 ; m++)
		{
			mult = i * m;
			if (mult < 10)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(mult + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
				{
				}
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (m != 9)
				{
					_putchar(',');
					_putchar(' ');

				}
				else
				{
				}
			}
		}
		_putchar('\n');
	}
}

