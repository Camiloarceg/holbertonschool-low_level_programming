#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 *@argc: arguments count.
 *@argv: arguments array.
 *
 * Return: 0 if sucess.
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 1)
		return (0);
	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
