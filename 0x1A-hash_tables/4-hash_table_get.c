#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht: the hash table. 
 * @key: the key to look for. 
 * Return: he value associated with the element, or NULL if key couldn’t be found. 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index])
	{
		for (tmp = ht->array[index] ; tmp != NULL ; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		}
	}
	return (NULL);
}
