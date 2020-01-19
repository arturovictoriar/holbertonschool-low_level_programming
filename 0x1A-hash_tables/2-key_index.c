#include "hash_tables.h"

/**
  * key_index - create a index for the key in the hash table
  * @size:  size of the hash table
  * @key: is the key
  * Return: the index of the key in the hash table
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx = 0;

	key_idx = hash_djb2(key) % size;
	return (key_idx);
}
