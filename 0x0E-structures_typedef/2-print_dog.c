#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *@d: the struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	if (d->name != 0)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (d->age != 0)
		printf("Name: %f\n", d->age);
	else
		printf("Name: (nil)");
	if (d->owner != 0)
		printf("Name: %s\n", d->owner);
	else
		printf("Name: (nil)");
}
