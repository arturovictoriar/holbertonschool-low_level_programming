#include "lists.h"

/**
  * insert_nodeint_at_index - fills memory with a constant byte
  * @head: is the owner of the dog
  * @idx: is the index
  * @n: is a number
  * Return: a address
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *headcopy;
	unsigned int i;

	headcopy = *head;
	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = headcopy;
		*head = new;
	}
	else
	{
		for (i = 0; (i < idx - 1)  && (headcopy->next != NULL); i++)
			headcopy = headcopy->next;

		if (idx == i && headcopy->next == NULL)
		{
			new->next = NULL;
			headcopy->next = new;
		}
		if (i < idx)
		{
			new->next = (headcopy)->next;
			(headcopy)->next = new;
		}
		else
		{
			free(new);
			return (NULL);
		}
	}

	return (*head);
}
