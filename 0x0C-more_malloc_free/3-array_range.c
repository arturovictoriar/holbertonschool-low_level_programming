#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - Create an array of integers.
  * @min: numbers of rows
  * @max: numbers of colums
  * Return: an array address
  */

int *array_range(int min, int max)
{
	int *s;
	int i, flag = 0;

	if (min > max)
		return (NULL);
	if (min == 0)
		flag = 1;

	s = malloc((max - min + flag) * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		s[i] = min + i;

	return (s);
}
