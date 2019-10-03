#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: is a pointer type char
 * @s2: is a pointer type char
 * Return: Always 0.
 *
 */
void reverse_array(int *a, int n)
{
int result[n];
int i;
n--;

for (i = 0; i <= n; i++)
result[i] = a[i];

for (i = 0; i <= n; i++)
a[i] = result[n - i]; 

}
