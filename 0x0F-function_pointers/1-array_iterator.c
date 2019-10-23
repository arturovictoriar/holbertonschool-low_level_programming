#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_iterator - fills memory with a constant byte
  * @array: is the array
  * @size: is the size of the array
  * @action: is funtion pointer
  * Return: a void pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
