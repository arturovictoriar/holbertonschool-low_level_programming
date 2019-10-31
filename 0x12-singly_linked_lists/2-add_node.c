#include "lists.h"

/**
  * add_node - fills memory with a constant byte
  * @head: is the owner of the dog
  * @str: is a string
  * Return: a address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		new->str = strdup("(nil)");
		new->len = 0;
		new->next = *head;
		*head = new;
	}
	else
	{
		new->str = strdup(str);
		for (n = 0; new->str[n] != '\0'; n++)
			;
		new->len = n;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
