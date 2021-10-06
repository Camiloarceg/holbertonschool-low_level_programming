#include <stdio.h>
/**
 *main-print the numbers base 10 but no char allowed
 *
(*
 *
(*
 * Return: Returned value 0
 */
int main(void)
{
	int i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
