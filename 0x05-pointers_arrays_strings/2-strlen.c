#include <stdio.h>
/**
 * _strlen - check the code for Holberton School students.
 * @*s: is a pointer int char type
 * Return: Always 0.
 */
int _strlen(char *s)
{
int len;
for (len = 0; len < 12; len++)
{
printf("%d %c\n", *s, *s);
if (*s == 0)
return (len);
s++;
}
return (len);
}
