#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * strtow - splits a string into words
  * @str: a string with spaces
  * Return: an address
  */

char **strtow(char *str)
{
	int i, j , k, cont1, cont2, flag1 = 0;
	char **splitt;
	if (str == NULL || str == '\0')
	return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && flag1 == 0)
		{
			cont1++;
			flag1 = 1;
		}
		else if (flag1 == 1 && str[i + 1] == ' ')
			flag1 = 0;
	}
	flag1 = 0;

	splitt = malloc((cont1 + 1) * sizeof(char *));

	if (!splitt)
		return (NULL);

	for (i = 0, j = 0; i < cont1; i++, j++)
	{
		for ( ; str[j] != '\0'; j++)
		{
			if (str[j] != ' ')
			{
				cont2++;
				flag1 = 1;
			}

			else if (flag1 == 1 && (str[j + 1] == ' ' || str[j] != '\0'))
			{
				 flag1 = 0;
				 splitt[i] = malloc(cont2 * sizeof(char) + 1);
				 if (splitt[i] == NULL)
				 {
					 free(splitt);
					 for (i--; i >= cont1; i--)
						 free(splitt[i]);
					 return (NULL);
				 }
				 for (k = 0; k < cont2; k++)
					 splitt[i][k] = str[(j - cont2) + k];
				 splitt[i][k] = '\0';
				 cont2 = 0;
				 break;
			}
		}
	}
	splitt[i] = NULL;
	return (splitt);
}
