#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
char i;
for (i= 'a'; i< 'z'; i++)
    {
    if (c==i)
    return (1);
    }
return (0);
}
