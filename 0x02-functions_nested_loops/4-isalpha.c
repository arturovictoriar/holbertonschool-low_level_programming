#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
char i,j;
    for (i= 'a'; i < 'z'; i++)
{
if (c==i)
return (1);
}
for(j= 'A'; j < 'Z'; j++)
{
if (c==j)
return (1);
}

    return (0);
}
