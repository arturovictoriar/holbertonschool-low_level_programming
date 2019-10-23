#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * int_index - fills memory with a constant byte
  * @array: is the array
  * @size: is the size of the array
  * @cmp: is funtion pointer
  * Return: a void pointer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);

}
