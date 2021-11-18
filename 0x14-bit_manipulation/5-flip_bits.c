#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 *	       flip to get from one number to another.
 * @n:number;
 * @m:other number;
 *
 * Return: number of flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xo;
	int count = 0;

	xo = n ^ m;

	while (xo > 0)
	{
		if ((xo & 1) == 1)
			count++;

		xo >>= 1;
	}

	return (count);
}
