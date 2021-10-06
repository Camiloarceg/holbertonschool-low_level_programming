#include <stdio.h>
/**
 *main-print the entires alphabets
 *
(*
 *
(*
 * Return: Returned value 0
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i;

	for (i = 0 ; i < 53 ; i++)
		putchar(alpha[i]);
	return (0);
}
