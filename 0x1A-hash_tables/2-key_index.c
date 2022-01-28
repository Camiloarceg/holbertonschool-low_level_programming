#include "hash_tables.h"
/**
 * key_index -  gives you the index of a key.
 *
 * @key: string key.
 * @size: size of the array.
 * Return: unsigned long int index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
