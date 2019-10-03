#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 * @a: is a pointer type char
 * Return: Always 0.
 *
 */
char *cap_string(char *a)
{
char separator[] = " \t\n,;.!?\"()}";
char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i, k, m;
char j;

for (i = 0; a[i] != '\0'; i++)
{

for (m = 0; separator[m] != '\0'; m++)
{

if (a[i - 1] == separator[m])
{
k = 0;

for (j = 'a'; j <= 'z'; j++, k++)
{
if (a[i] == j)
a[i] = l[k];
}

}

}


}
return (a);
}
