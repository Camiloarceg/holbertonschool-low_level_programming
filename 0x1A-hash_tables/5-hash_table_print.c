#include "hash_tables.h"
/**
 * hash_table_print - add nodes to table
 * @ht: hash table
 *
 * Return: index value.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i <= ht->size)
	{
		node = ht->array[i];
		if (ht->array[i] != NULL)
		{

			while (node != NULL)
			{
				if (flag != 0)
					printf(", ");
				printf("\'%s\': \'%s\'", node->key, node->value);
				node = node->next;
				flag = 1;
			}
		}
		i++;
	}
	printf("}\n");
}
