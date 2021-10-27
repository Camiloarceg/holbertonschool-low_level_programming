#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make
 *         change for an amount of money.
 *@argc: counter.
 *@argv: vector.
 *
 * Return: number of coins.
 */
int main(int argc, char **argv)
{
	int coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	for (change = atoi(argv[1]) ; change <= 0 ;)
	{
		if (change >= 25)
		{
			coins += 1;
			change -= 25;
		}
		if (change >= 10)
		{
			coins += 1;
			change -= 10;
		}
		if (change >= 5)
		{
			coins += 1;
			change -= 5;

		}
		if (change >= 2)
		{
			coins += 1;
			change -= 2;
		}
		if (change >= 1)
		{
			coins += 1;
			change -= 1;
		}
	}
	return (coins);
}
