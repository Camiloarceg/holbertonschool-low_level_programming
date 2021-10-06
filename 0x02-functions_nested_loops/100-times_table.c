#include "main.h"
/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: times for tables
 *
 * Return: value void
 */
void print_times_table(int n)
{
	int i, m, mult;

	if (n >= 0 && n <= 15)
		for (i = 0 ; i <= (n) ; i++)
		{
			_putchar('0');
			for (m = 1 ; m <= (n) ; m++)
			{
				mult = i * m;
				if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
}
