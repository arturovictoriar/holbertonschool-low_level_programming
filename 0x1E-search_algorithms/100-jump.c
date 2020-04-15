#include "search_algos.h"
#include <math.h>

/**
  * min_value - get the min value of two numbers
  * @l: number l
  * @r: number r
  * Return: return the minimun value
  */
size_t min_value(size_t l, size_t r)
{
	return ((l < r) ? l : r);
}


/**
  * jump_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located otherwise -1
  */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, s = sqrt(size);

	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", (int) l, array[l]);
	while (array[min_value(s, size) - 1] < value)
	{
		if (s >= size)
		{
			printf("Value found between indexes [%d] and [%d]\n", (int) l, (int) s);
			printf("Value checked array[%d] = [%d]\n", (int) l, array[l]);
			return (-1);
		}
		if (array[min_value(s + sqrt(size), size) - 1] >= value)
			break;
		l = s;
		s += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", (int) l, array[l]);
	}

	printf("Value found between indexes [%d] and [%d]\n", (int) l, (int) s);

	for (; array[l] < value; l++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) l, array[l]);
		if (l == min_value(s, size))
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", (int) l, array[l]);
	if (array[l] == value)
		return (l);

	return (-1);
}
