#include "main.h"
/**
 *_abs - computes the absolute value of an integer.
 *@n: an int to compute the absolte value
 *
 * Return: the absolute value of the int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;
		return (n);
	}
}

