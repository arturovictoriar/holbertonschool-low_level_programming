#ifndef HOLBERTON_FUNTIONS
#define HOLBERTON_FUNTIONS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct add_s - Node in the linked list of additions
 *
 * @n_add: Pointer to an addition representation
 * @n_dig: Real space that addtion takes
 * @len_r: Total space to save the addition
 * @next: Pointer to the next addition
 */
typedef struct add_s
{
	char *n_add;
	int n_dig;
	int len_r;
	struct add_s *next;
} add_t;


int _putchar(char c);  /* An example function declaration */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
