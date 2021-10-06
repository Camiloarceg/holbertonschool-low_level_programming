#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 is sucess
 */
int main(void)
{
	int i;
	 unsigned long x1 = 1, x2 = 2, y;


	printf("%lu, %lu, ", x1, x2);
	for (i = 0 ; i < 48 ; i++)
	{
		y = x1 + x2;
		printf("%lu", y);
		x1 = x2;
		x2 = y;
		if (i != 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
