#include "hash_tables.h"

/**
 *hash_table_get - a function that gets a value with with a key
 *@ht: hash table
 *@key: the key
 *Return: element or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *_get;
unsigned long int idx;

if (key == NULL || ht == NULL)
return (NULL);

idx = key_idx((const unsigned char *)key, ht->size);
_get = ht->array[idx];

for (; _get != NULL; _get = _get->next)
{
if (strcmp(_get->key, key) == 0)
return (_get->value);
}
return (NULL);
}
