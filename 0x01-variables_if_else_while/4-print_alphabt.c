#include <stdio.h>
/**
 *main-print the entire alphabet, but no q and e.
 *
(*
 *
(*
 * Return: Returned value 0
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz\n";
	int i;

	for (i = 0 ; i < 25 ; i++)
		putchar(alpha[i]);
	return (0);

}
