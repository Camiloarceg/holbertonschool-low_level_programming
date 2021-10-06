#include <stdio.h>
/**
 *main - a program that finds and prints the sum of the even-valued terms
 *
 *Return: 0 is sucess
 */
int main(void)
{
	unsigned long x1 = 1, x2 = 2, y;
	float sum;

	while (y < 4000000)
	{
		y = x1 + x2;
		if ((y % 2) == 0)
		{
			sum = sum + y;
		}
		x1 = x2;
		x2 = y;
	}
	sum = sum + 2;
	printf("%.0f\n", sum);
	return (0);
}
