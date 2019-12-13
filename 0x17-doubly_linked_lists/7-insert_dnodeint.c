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
	dlistint_t *new, *headcopy = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (headcopy != NULL && headcopy->prev != NULL)
	{
		headcopy = headcopy->prev;
		*h = (*h)->prev;
	}

	if (idx == 0)
	{
		new->next = headcopy;
		*h = new;
		return (new);
	}

	for (i = 0; (i < idx - 1); i++)
	{
		if (headcopy == NULL)
		{
			free(new);
			return (NULL);
		}
		headcopy = headcopy->next;
		if (headcopy == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = headcopy->next;
	headcopy->next = new;
	return (new);
}
