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
	int sum = 0, i, m;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (m = 0; s[m]; m++)
			{
				if (s[m] < 48 || s[m] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
