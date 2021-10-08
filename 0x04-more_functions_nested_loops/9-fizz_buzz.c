#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number and fizzbuzz
 *
 * Return: 0 if sucess.
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
			printf("%s", "Fizz");
		}
		if ((i % 5) == 0)
		{
			indicador = 1;
			printf("%s", "Buzz");
		}
		if (indicador == 0)
			printf("%d", i);
		printf(" ");
	}
	if (i != 100)
		printf("\n");
	return (0);
}
