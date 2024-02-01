#include "hash_tables.h"

/**
 * key_index - calculates where a key/value pair should be stored
 * in the array of the hash table
 * @key: the key
 * @size: size of the hash table array
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
