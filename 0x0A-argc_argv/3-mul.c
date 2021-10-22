#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *@argc: arguments count.
 *@argv: arguments array.
 *
 * Return: 0 if sucess and 1 if error.
 */
int main(int argc, char **argv)
{
	int i, mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1 ; i < argc ; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
