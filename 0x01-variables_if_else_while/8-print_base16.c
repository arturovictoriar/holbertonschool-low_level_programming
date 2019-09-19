#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;
int num;
for (num = 0; num <= 9; num++)
putchar (num + '0');
for (abc = 'a'; abc <= 'f'; abc++)
putchar (abc);
putchar ('\n');
return (0);
}
