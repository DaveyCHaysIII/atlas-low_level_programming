#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n, lastdig;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdig = n % 10;
if (lastdig == 0)
{
printf("Last digit of %d is %d and is %d\n", n, lastdig, lastdig);
}
else if (lastdig > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
}
else
{
printf("Last digit of %d is %d and is less than 5\n", n, lastdig);
}
return (0);
}

