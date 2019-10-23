#include "3-calc.h"

/**
  * main - print the name of this function
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char **argv)
{
	int (*pf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	pf = get_op_func(argv[2]);

	if (pf == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", pf(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
