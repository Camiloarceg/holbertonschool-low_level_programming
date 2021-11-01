#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: Destiny
 * @src: Source
 * Return: Source Value
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	for (; *src != '\0'; src++, s++)
	{
		*s = *src;
	}

	*s = '\0';
	return (s);
}
/**
 * _strlen - returns the length of a string
 * @s: String pointer
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
/**
 * new_dog - creates a new dog.
 * @name: name of dog.
 * @age: of dog.
 * @owner: of dog.
 *
 * Return: a struct type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(d));
	if (d == 0)
		return (0);
	if (name == 0)
		d->name = 0;
	else
	{
		d->name = (char *) malloc(_strlen(name) + 1);

		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		_strcpy(d->name, name);
	}
	if (owner == 0)
		d->owner = 0;
	else
	{
		d->owner = (char *) malloc(_strlen(owner) + 1);
		if (d->owner == 0)
		{
			free(d->name);
			free(d);
			return (NULL);
		}

		_strcpy(d->owner, owner);
	}
	d->age = age;
	return (d);
}
