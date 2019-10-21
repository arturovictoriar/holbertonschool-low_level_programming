#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_dog - fills memory with a constant byte
  * @d: is the pointer of the strut
  * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
