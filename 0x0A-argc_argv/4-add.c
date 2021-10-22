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
	{
		printf("%s\n", "0");
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		if (*argv[i] != '0')
		{
			if (atoi(argv[i]) == 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
