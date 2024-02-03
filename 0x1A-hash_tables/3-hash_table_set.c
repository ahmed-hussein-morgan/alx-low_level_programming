#include "hash_tables.h"
/**
 * create_node - creates a new node
 * @key: the node key
 * @value: the node value
 * Return: new node
 */

hash_node_t *create_node (const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if ((!new_node->key) || (!new_node->value))
	{
		free(new_node);
		free(new_node->key);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value:  is the value associated with the key
 *			value must be duplicated
 *			value can be an empty string
 * Return: largest number
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	
}
