#include "dog.h"
/**
 * init_dog - nitialize a variable of type struct dog
 *@d: pointer to the dog.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: name of owner.
 *
 * Return : void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
