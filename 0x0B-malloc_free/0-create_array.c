#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - fills memory with a constant byte
  * @size: is the size of the pointer
  * @c: is a letter
  * Return: an address
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * (size + 1));
		for (i = 0; i < size; i++)
			s[i] = c;
		s[i] = '\0';
	}
	return (s);
}
