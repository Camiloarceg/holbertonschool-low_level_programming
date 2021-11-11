#include <stdio.h>
/**
 * beforemain - prints befor the main function.
 *
 * Return: void
 */
void __attribute__ ((constructor)) beforemain()
{
	    printf("You're beat! and yet, you must allow,\n");
	    printf("I bore my house upon my back!\n");
}
