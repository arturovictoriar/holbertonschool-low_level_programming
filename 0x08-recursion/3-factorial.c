#include "holberton.h"
#include <stdio.h>
/**
 * factorial - get the factorial of a given number
 * @n: is the number which get the factorial
 * Return: The factorial of n
 */

int factorial(int n)
{
int factor = 0;

if (n < 0)
return (-1);

if (n == 0)
return (1);

else
{
factor = n * factorial(n - 1);
return (factor);
}

}
