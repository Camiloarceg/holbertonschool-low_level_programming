#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: get the las digits of this number
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld > 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = -1 * ld;
		_putchar(ld + '0');
		return (ld);
	}
}

