#include "hash_tables.h"

/**
 * hash_table_create - hash table.
 * @size: size of an array.
 * Return: Null if error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *_hash;
	unsigned long int i;

	_hash = malloc(sizeof(hash_table_t));
	if (_hash == NULL)
		return (NULL);

	_hash->size = size;
	_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (_hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		_hash->array[i] = NULL;

	return (_hash);
}
