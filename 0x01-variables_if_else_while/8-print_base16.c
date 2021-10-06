#include <stdio.h>
/**
 *main-print the entire group of base 16 char
 *
(*
 *
(*
 * Return: Returned value 0
 */
int main(void)
{
	char alpha[] = "0123456789abcdef\n";
	int i;

	for (i = 0 ; i < 17 ; i++)
		putchar(alpha[i]);
	return (0);

}
