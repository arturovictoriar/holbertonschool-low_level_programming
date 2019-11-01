#include "lists.h"

/**
  * free_list - fills memory with a constant byte
  * @head: is the owner of the dog
  * Return: a number
  */
void free_list(list_t *head)
{
	list_t *savepoin;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			savepoin = head->next;
			free(head->str);
			free(head);
			head = savepoin;
		}
		free(head->str);
		free(head);
	}
}
