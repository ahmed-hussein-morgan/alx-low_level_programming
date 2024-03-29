#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: he value associated with the element,
 *	or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;

	if (ht->array[index])
	{
		return (ht->array[index]->value);
	}
	else
	{
		return (NULL);
	}
}
