#include "holberton.h"
#include <stdio.h>
int fakefake(int prime, int primediv);
/**
 * is_prime_number - get the value of x raised to power of y
 * @n: is a natural number
 * Return: 1 if n is a prime number and 0 if not.
 */

int is_prime_number(int n)
{
return (fakefake(n , 3));
}

int fakefake (int prime, int primediv)
{
if (prime < 0)
return (0);

else if (prime == 1)
return (0);

else if (prime % primediv == 0 && primediv <= prime/2)
return(0);

else if (prime % primediv != 0 && primediv > prime/2)
return (1);

else
return (fakefake(prime, primediv + 1));

}
