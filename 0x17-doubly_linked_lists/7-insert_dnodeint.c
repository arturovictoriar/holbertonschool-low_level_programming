#include "lists.h"

/**
  * insert_dnodeint_at_index -  inserts a new node at a given position
  * @h: header of double linked list
  * @idx: index of the node, starting from 0
  * @n: is a given number
  * Return: a address of nth node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *headcopy;
	unsigned int i;

	headcopy = *h;
	if (headcopy == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (headcopy->prev != NULL)
		headcopy = headcopy->prev;

	if (idx == 0)
	{
		new->next = headcopy;
		headcopy = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
		headcopy = headcopy->next;

	new->next = headcopy->next;
	headcopy->next = new;
	return (new);
}
