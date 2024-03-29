#include "hash_tables.h"

/**
 *hash_table_set - adds element to the hash table
 *@ht: pointer to hash
 *@key: pointer to key
 *@value: values to add up
 *Return: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long idx, size;
hash_node_t *new_node;

if (ht  == NULL || key == NULL || value == NULL)
return (0);

size = ht->size;
idx = key_idx((const unsigned char *)key, size);

if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
{
ht->array[idx]->value = strdup(value);
return (1);
}

new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[idx];
ht->array[idx] = new_node;
return (1);
}
