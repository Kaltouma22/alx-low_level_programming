#include "hash_tables.h"

/**
 * key_index - A function get the index of a key in the hash table array
 * @key: Is the key string
 * @size: Is the size of the array of the hash table
 *
 * Return: Index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
