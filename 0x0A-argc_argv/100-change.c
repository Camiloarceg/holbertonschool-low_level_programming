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
	for (; change > 0 ;)
	{
		if (change >= 25)
		{
			coins += 1;
			change -= 25;
		}
		else if (change >= 10)
		{
			coins += 1;
			change -= 10;
		}
		else if (change >= 5)
		{
			coins += 1;
			change -= 5;

		}
		else if (change >= 2)
		{
			coins += 1;
			change -= 2;
		}
		else if (change >= 1)
		{
			coins += 1;
			change -= 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
