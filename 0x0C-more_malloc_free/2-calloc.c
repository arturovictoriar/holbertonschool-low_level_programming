#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - fills memory with a constant byte
  * @nmemb: numbers of rows
  * @size: numbers of colums
  * Return: an array address
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = calloc(nmemb, size);

	if (s == NULL)
		return (NULL);

	return (s);
}
