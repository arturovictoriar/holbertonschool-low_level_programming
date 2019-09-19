#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit < 6)
{
if (lastdigit == 0)
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
else
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
/* your code goes there */
return (0);
}
