#include "3-calc.h"
/**
  * op_add - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
  * op_mod - print the name of this function
  * @a: has the length of the arguments
  * @b: has the arguments
  * Return: 0 to indicate a good working of the program
  */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
