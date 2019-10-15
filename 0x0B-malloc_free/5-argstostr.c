#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - fills memory with a constant byte
  * @ac: is the size of the pointer
  * @av: is a letter
  * Return: an address
  */

char *argstostr(int ac, char **av)
{
	char *conca;
	int i, j, cont = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cont++;
	}

	conca = malloc(cont * sizeof(char) + ac + 1);
	if (!conca)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			conca[k] = av[i][j];
		conca[k] = '\n';
		k++;
	}
	conca[k] = '\0';
	return (conca);
}
