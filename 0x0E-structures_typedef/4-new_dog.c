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
	int cont1, cont2;
	char *sname, *sowner;
	dog_t *ndog;

	for (cont1 = 0; name[cont1] != '\0'; cont1++)
		;
	for (cont2 = 0; owner[cont2] != '\0'; cont2++)
		;
	sname = malloc(sizeof(char) * cont1 + 1);
	if (sname == NULL)
		return (NULL);
	for (cont1 = 0; name[cont1] != '\0'; cont1++)
		sname[cont1] = name[cont1];
	sname[cont1] = name[cont1];

	sowner = malloc(sizeof(char) * cont2 + 1);
	if (sowner == NULL)
		return (NULL);
	for (cont2 = 0; name[cont2] != '\0'; cont2++)
		sowner[cont2] = owner[cont2];
	sowner[cont2] = owner[cont2];

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
