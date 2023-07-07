#include "hash_tables.h"

/**
 * hash_djb2 - function to generate djb2
 * @str: pointer to hash
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int i;

	while ((i = *str++))
	hash = ((hash << 5) + hash) + i;

	return (hash);
}
