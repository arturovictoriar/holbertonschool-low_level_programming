#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - fills memory with a constant byte
  * @name: is the name of the dog
  * @age: is the age of the dog
  * @owner: is the owner of the dog
  * Return: a void pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
