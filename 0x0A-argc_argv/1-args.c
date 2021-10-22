#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 *@argc: argument count.
 *@argv: argument array.
 *
 * Return: 0 if success.
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
		}
		i -= 1;
		printf("%d\n", i);
	}
	else
		printf("0\n");
	return (0);
}
