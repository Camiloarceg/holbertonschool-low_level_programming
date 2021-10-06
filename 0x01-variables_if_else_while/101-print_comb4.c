#include <stdio.h>
/**
*main-prints all possible different combinations of three digits.
*
*
*
*
* Return: Returned value 0
*/
int main(void)
{
	int i;
	int n;
	int m;

	for (i = '0' ; i <= '8' ; i++)
	{
		for (n = i + 1  ; n <= '9' ; n++)
		{
			for (m = n + 1 ; m <= '9' ; m++)
			{
				putchar(i);
				putchar(n);
				putchar(m);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
