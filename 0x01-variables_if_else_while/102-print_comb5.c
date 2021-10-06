#include <stdio.h>
/**
*main-prints all possible combinations of two two-digit numbers.
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
	int x;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (n = '0'  ; n <= '8' ; n++)
		{
			for (m = '0' ; m <= '9' ; m++)
			{
				for (x = '0' ; x <= '9' ; x++)
				{
					if (i == '0' && n == '0' && m == '0' && x == '0')
					{
					}
					else
					{
						putchar(i);
						putchar(n);
						putchar(' ');
						putchar(m);
						putchar(x);
					}
					if ((i == '9' && n == '8' && m == '9' && x == '9') || (i == '0' && n == '0' && m == '0' && x == '0'))
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
