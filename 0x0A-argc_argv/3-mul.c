#include <stdio.h>
#include <stdlib.h>

int power(int b);

/**
  * main - print the multiplication of two arguments
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char **argv)
{

	int i, j, cont, num[2] = {0, 0};

	if (argc < 3)
		printf("Error\n");

	else
	{
		for (i = 1; argv[i] != '\0'; i++)
		{
			for (cont = 0; (argv[i])[cont] != '\0'; cont++)
				;

			for (j = 0, cont--; (argv[i])[j] != '\0'; j++)
			{
				if ((argv[i])[cont - j] == '-')
				{
					num[i - 1] *= -1;
					break;
				}
				else
					num[i - 1] = power(j) * ((argv[i])[cont - j] - '0') + num[i - 1];
			}
		}
		printf("%d\n", num[0] * num[1]);
	}
	return (0);
}

/**
  * power - get the power 10 times b
  * @b: is the times of 10
  * Return: the power 10 times b
  */

int power(int b)
{
	int i, num = 1;

	for (i = 0; i < b; i++)
	{
		num *= 10;
	}
	return (num);
}
