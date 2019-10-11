#include "holberton.h"
#include <stdio.h>
/**
 * wildcmp - Compare two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: is a pointer char type that store a string
 * @s2: ia a pointer chat typer that store a string
 * Return: true or false if the s1 and s2 can considerer iqual
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

else if (*s2 == '*')
{

if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));

else if (wildcmp(s1, s2 + 1))
return (1);

else
return (wildcmp(s1 + 1, s2));

}

return (0);
}
