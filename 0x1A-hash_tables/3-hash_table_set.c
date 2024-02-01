#include "hash_tables.h"

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
	hash_node_t *head;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
		return (0);
	if (ht->array[index] == NULL)
	{
		head = malloc(sizeof(hash_node_t));
		head->key = malloc(sizeof(key) + 1);
		head->value = malloc(sizeof(value) + 1);
		strcpy(head->key, key);
		strcpy(head->value, value);
		ht->array[index] = head;
	}
	else
	{
		head = ht->array[index];
		if (strcmp(head->key, key) == 0)
		{
			strcpy(head->value, value);
			return (1);
		}
		else
		{
			hash_node_t *node = malloc(sizeof(hash_node_t));

			node->key = malloc(sizeof(key) + 1);
			node->value = malloc(sizeof(value) + 1);
			strcpy(node->key, key);
			strcpy(node->value, value);
			node->next = head;
			ht->array[index] = node;
			return (1);
		}
	}
	return (0);
}
