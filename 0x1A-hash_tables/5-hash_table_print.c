#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht:  is the hash table
 * should print the key/value in the order that
 * they appear in the array of hash table
 * Order: array, list
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int separate = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (separate != 0)
				printf(", ");
			separate = 1;
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
