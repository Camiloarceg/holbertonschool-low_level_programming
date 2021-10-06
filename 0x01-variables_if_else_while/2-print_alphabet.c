#include <stdio.h>
/**
 *main-print the entire alphabet
 *
(*
 *
(*
 * Return: Returned value 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0 ; i < 27 ; i++)
		putchar(alpha[i]);
	return (0);
}
