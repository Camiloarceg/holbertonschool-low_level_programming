#include "main.h"
#include <stdio.h>
/**
 * main - main function prints the name of the program.
 *@argc: arguments count.
 *@argv: arguments array.
 *
 * Return: 0 if sucess.
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	(void)argc;
	printf ("%s\n", argv[0]);
	return 0;
}

