#include "lists.h"

/**
  * free_list - fills memory with a constant byte
  * @h: is the owner of the dog
  * Return: a number
  */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
	}
	free(head);
}
