#include <stdio.h>
/**
 * main - Write a program that prints the number and fizzbuzz
 *
 * Return: void.
 */
int main(void)
{
	int i, indicador;

	for (i = 1 ; i <= 100 ; i++)
	{
		indicador = 0;
		if ((i % 3) == 0)
		{
			indicador = 1;
			printf("Fizz");
		}
		if ((i % 5) == 0)
		{
			indicador = 1;
			printf("Buzz");
		}
		if (indicador == 0)
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
