#include <stdio.h>
/**
*main-prints all possible different combinations of two digits.
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

	for (i = '0' ; i <= '8' ; i++)
	{
		for (n = i + 1  ; n <= '9' ; n++)
		{
			putchar(i);
			putchar(n);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
