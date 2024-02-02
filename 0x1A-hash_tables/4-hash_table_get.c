#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assiciated wit a key
 * @ht: the hash table
 * @key: the key to look for
 *
 * Return: the value if found, NULL if not
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
