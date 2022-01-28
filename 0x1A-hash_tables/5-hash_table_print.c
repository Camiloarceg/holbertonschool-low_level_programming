#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;
	char *coma  = "";

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];

			while (tmp)
			{
				printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
				coma = ", ";

				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}


