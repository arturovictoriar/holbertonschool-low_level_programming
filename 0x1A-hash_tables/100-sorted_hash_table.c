#include "hash_tables.h"

/**
  * shash_table_create - create a ordered hash table
  * @size:  size of the hash table
  * Return: the memory address where the hash table is stored
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;
	shash_node_t **head_array = NULL;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;

	head_array = malloc(sizeof(shash_node_t *) * size);
	if (head_array == NULL)
		return (NULL);

	ht->array = head_array;

	return (ht);
}

/**
  * shash_table_set - create a ordered hash table
  * @value: value associated with the key
  * @key: is the key
  * @ht: hash table you want to add or update the key/value
  * Return: 1 in success 0 in otherwise
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	list = (ht->array)[idx];

	if (list != NULL)
	{
		while (list)
		{
			if (!strcmp(list->key, key))
			{
				free(list->value);
				list->value = strdup(value);
				if (list->value == NULL)
					return (0);
				return (1);
			}
			list = list->next;
		}
	}

	node = sh_n_create(key, value);
	if (node == NULL)
		return (0);

	node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	sorted_list(ht, node);

	return (1);
}

/**
  * shash_table_get - get the value associate with a key
  * @ht:  the hash table
  * @key: is the key
  * Return: the value associate to the key
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t *list = NULL;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	list = ht->array[idx];

	if (!list)
		return (NULL);

	while (list)
	{
		if (!strcmp(list->key, key))
			return (list->value);
		list = list->next;
	}
	return (NULL);
}

/**
  * shash_table_print - print a sorted hash table
  * @ht: hash table
  * Return: nothing
  */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *hash_table_list = NULL, *list = NULL;
	int flag_coma_space = 0;

	if (ht == NULL)
		return;
	hash_table_list = ht->shead;

	printf("{");
	list = hash_table_list;
	if (list != NULL)
	{
		while (list)
		{
			if (!flag_coma_space)
			{
				printf("'%s': '%s'", list->key, list->value);
				flag_coma_space = 1;
			}
			else
				printf(", '%s': '%s'", list->key, list->value);
			list = list->snext;
		}
	}
	printf("}\n");
}

/**
  * shash_table_print_rev - print a sorted hash table in rev
  * @ht: hash table
  * Return: nothing
  */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *hash_table_list = NULL, *list = NULL;
	int flag_coma_space = 0;

	if (ht == NULL)
		return;
	hash_table_list = ht->stail;

	printf("{");
	list = hash_table_list;
	if (list != NULL)
	{
		while (list)
		{
			if (!flag_coma_space)
			{
				printf("'%s': '%s'", list->key, list->value);
				flag_coma_space = 1;
			}
			else
				printf(", '%s': '%s'", list->key, list->value);
			list = list->sprev;
		}
	}
	printf("}\n");
}

/**
  * shash_table_delete - delete a hash table
  * @ht: the hash table
  * Return: nothing
  */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		sfree_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
  * sfree_list - free a list
  * @head: each list of the hash table
  * Return: nothing
  */

void sfree_list(shash_node_t *head)
{
	shash_node_t *savepoin = NULL;

	if (head != NULL)
	{
		while (head)
		{
			savepoin = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = savepoin;
		}
	}
}

/**
  * sorted_list - sort a list
  * @ht:  a hash table
  * @node: node to add in the sorted hash table
  * Return: nothing
  */

void sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *sorted_head = NULL;

	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		sorted_head = ht->shead;

		while (sorted_head)
		{
			if (from_asci_to_number(node->key, sorted_head->key))
			{
				if (sorted_head->sprev)
					sorted_head->sprev->snext = node;

				node->sprev = sorted_head->sprev;
				node->snext = sorted_head;
				sorted_head->sprev = node;
				if (!node->sprev)
					ht->shead = node;

				return;
			}
			if (!sorted_head->snext)
				break;
			sorted_head = sorted_head->snext;
		}
		sorted_head->snext = node;
		node->sprev = sorted_head;
		node->snext = NULL;
		ht->stail = node;
	}
}

/**
  * from_asci_to_number - convert a string summing each ascci code of its chars
  * @node: current node
  * @sorted_head: prev node
  * Return: 1 if node <= sorted or 0 otherwise
  */

int from_asci_to_number(char *node, char *sorted_head)
{
	int i = 0;

	for (i = 0; node[i] != '\0' && sorted_head[i] != '\0'; i++)
	{
		if (node[i] == sorted_head[i])
		{
			if (node[i + 1] == '\0' && sorted_head[i + 1] == '\0')
			{
				return (1);
			}
			else if (node[i + 1] == '\0' && sorted_head[i + 1] != '\0')
			{
				return (1);
			}
			else if (node[i + 1] != '\0' && sorted_head[i + 1] == '\0')
			{
				return (0);
			}
			continue;
		}
		else if (node[i] < sorted_head[i])
		{
			return (1);
		}
		else if (node[i] > sorted_head[i])
		{
			return (0);
		}
	}
	return (0);
}

/**
  * sh_n_create - create a hash node
  * @key:  is the key name
  * @value: value associated with the key
  * Return: the position memory where is stored the head
  */

shash_node_t *sh_n_create(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	return (NULL);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL || new->key == NULL)
	{
		if (!new->key && new->value)
			free(new->value);

		if (new->key && !new->value)
			free(new->key);

		free(new);
		return (NULL);
	}

	new->next = NULL;
	new->snext = NULL;
	new->sprev = NULL;

	return (new);
}
