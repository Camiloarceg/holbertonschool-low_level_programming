#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL, *head = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0 ; i <= ht->size ; i++)
	{
		head = ht->array[i];
		tmp = head;
		while (tmp != NULL)
		{
			head = head->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = head;
		}
	}
	free(ht->array);
	free(ht);
}
