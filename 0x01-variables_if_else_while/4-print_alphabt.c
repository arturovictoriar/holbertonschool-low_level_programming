#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
if ((abc != 'q') && (abc != 'e'))
putchar (abc);
}
putchar ('\n');
return (0);
}
