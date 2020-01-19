#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @value: value associated with the key
  * @key: is the key
  * @ht: hash table you want to add or update the key/value
  * Return: 1 in success 0 in otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *list = NULL;
	unsigned long int index = 0, size = ht->size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *) key, size);
	list = ht->array[index];

	while (list)
	{
		if (strcmp(list->key, key) == 0)
		{
			free(list->value);
			list->value = strdup(value);
			if (list->value == NULL)
				return (0);
			return (1);
		}
		list = list->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
