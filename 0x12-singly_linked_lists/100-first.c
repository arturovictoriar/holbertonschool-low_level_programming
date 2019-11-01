#include <stdio.h>
void firstexe(void) __attribute__ ((constructor));
/**
  * firstexe - fills memory with a constant byte
  * Return: nothing
  */
void firstexe(void)
{
	 printf("You're beat! and yet, you must allow,\n");
	 printf("I bore my house upon my back!\n");
}
