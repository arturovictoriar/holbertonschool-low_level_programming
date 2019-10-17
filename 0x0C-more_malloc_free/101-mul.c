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
	int len1, len2, flag = 0, i;
	char *result, *num1, *num2;

	if (ac < 3)
	{
		printf("Error\n");
		exit(98);
	}

	else
	{
	for (len1 = 0; av[1][len1] == '\0' && flag == 0; len1++)
	{
		if (av[1][len1] + '0' < 0 && av[1][len1] + '0' > 9)
		{
			printf("Error\n");
			exit(98);
			flag = 1;
			break;
		}
	}

	for (len2 = 0; av[2][len2] == '\0' && flag == 0; len2++)
	{
		if (av[2][len2] + '0' < 0 && av[2][len2] + '0' > 9)
		{
			printf("Error\n");
			exit(98);
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		result = malloc(sizeof(char) * len1 + sizeof(char) * len2);
		num1 = malloc(sizeof(char) * len1);
		num2 = malloc(sizeof(char) * len2);

		for (i = 0; i < len1; i++)
			num1[i] = av[1][i];
		for (i = 0; i < len2; i++)
			num2[i] = av[2][i];




	}


	}
}
