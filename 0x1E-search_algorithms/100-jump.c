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
	size_t a = 0, b = sqrt(size);

	if (array == NULL)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
	while (array[min_value(b, size) - 1] < value)
	{
		if (a >= size || (b >= size && array[min_value(b + sqrt(size), size
								) - 1] < value))
		{
			printf("Value found between indexes [%d] and [%d]\n", (int) a, (int) b);
			for ( ; a < size; a++)
				printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
			return (-1);
		}
		if (array[min_value(b + sqrt(size), size) - 1] >= value)
			break;
		a = b;
		b += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
	}
	printf("Value found between indexes [%d] and [%d]\n", (int) a, (int) b);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
		a++;
		if (a == min_value(b + 1, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", (int) a, array[a]);
	if (array[a] == value)
		return (a);

	return (-1);
}
