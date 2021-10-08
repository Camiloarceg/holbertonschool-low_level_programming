#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int fil, col, p;

	if (size > 0)
	{
		for (fil = 0 ; fil < size ; fil++)
		{
			p = size - fil;
			for (col = 0 ; col < size ; col++)
			{
				if (p > 0)
				{
					_putchar(' ');
					p--;
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
