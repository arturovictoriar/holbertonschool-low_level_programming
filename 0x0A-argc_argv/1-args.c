#include <stdio.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
	if (**argv != '\0')
	printf("%d\n", argc -1);

	return (0);
}
