#include "lists.h"

/**
  * list_len - fills memory with a constant byte
  * @h: is the owner of the dog
  * Return: a number
  */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
