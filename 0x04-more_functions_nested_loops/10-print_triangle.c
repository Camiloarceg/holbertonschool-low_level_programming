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

	for (fil = 1 ; fil <= size ; fil++)
	{
		p = size - fil;
		for (col = 1 ; col <= size ; col++)
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
	if(size == 0)
		_putchar('\n');
}
