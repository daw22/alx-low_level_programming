#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);
/**
 * hash_table_set - add a new node to the hash table
 * @ht: pointer to the hash table
 * @key: the key of the new node
 * @value: the value of the new node
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
		return (0);
	if (ht->array[index] != NULL)
	{
		hash_node_t *node = ht->array[index];

		while (node)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				return (1);
			}
			node = node->next;
		}
		new = create_node(key, value);
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	new = create_node(key, value);
	ht->array[index] = new;
	return (1);
}

/**
 * create_node - creates a new node to be added to the hash table
 * @key: key of the node
 * @value: value of the node
 *
 * Return: pointer to the new node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	return (new);
}
