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
 * jump_search - search a value in a sort list
 * @array: list of numbers
 * @size: lenght of the list
 * @value: value to search for
 * Return: the first index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = sqrt(size), step = sqrt(size);

	if (array == NULL)
		return (-1);
	while (array[min_value(b, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a = b;
		b += step;
		if (a >= size)
			break;
	}
	if ((int)(a - step) >= 0)
	{
		a -= step;
		b -= step;
	}
	else
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
	printf("Value found between indexes [%d] and [%d]\n", (int)a, (int)b);
	while (array[a] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		a++;
		if (a == min_value(b + 1, size))
			return (-1);
	}

	if (array[a] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)a, array[a]);
		return (a);
	}
	return (-1);
}
