#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - print a random number and it tells if it's positive,
 *				negative or zero.
 * @i: integrer input
 *
 * Return: value 0
 */
void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
