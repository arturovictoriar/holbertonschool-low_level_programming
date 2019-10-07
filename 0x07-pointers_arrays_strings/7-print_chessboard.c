#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: is a pointer type char
 * @c: is a variable type char
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++ )
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
