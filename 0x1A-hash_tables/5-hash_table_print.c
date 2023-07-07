#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *
 *@ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int _int = 0, idx = 0;

	if (ht != NULL)
	{
		printf("{");
		for (_int = 0; _int < ht->size; _int++)
		{
			node = ht->array[_int];
			while (node != NULL)
			{
				if (idx != 0)
					printf(", ");
				idx = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
