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
	dog_t *my_dog;
	/*hacer espacio en memoria*/
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = NULL;
	my_dog->owner = NULL;
	my_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	my_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (my_dog->owner == NULL || my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = _strcpy(my_dog->owner, owner);
	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	return (my_dog);
}
