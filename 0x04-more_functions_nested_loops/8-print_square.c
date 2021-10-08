#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: int that define the size
 *
 * Return: void.
 */
void print_square(int size)
{
	int i, m;

	if (size > 0)
	{
		for (i = 0 ; i < size ; i++)
		{
			for (m = 0 ; m < size ; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}

