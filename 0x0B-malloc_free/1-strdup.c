#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - fills memory with a constant byte
  * @str: is the size of the pointer
  * Return: an address
  */

char *_strdup(char *str)
{
	char *s;
	int i, size;

	for (size = 0; str[size] != '\0'; size++)
		;

	if (size == 0 || !str)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
			s[i] = str[i];

		return (s);
	}
}
