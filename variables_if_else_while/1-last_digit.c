#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints whether the number stored in the variable n
 *is positive or negative.
 * Return: 0
 */
int main(void)
{
int n;
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
printf("Last digit of %d is ", n);
if (r > 5)
printf("%d and is greater than 5\n", r);
else if (r == 0)
printf("0 and is 0\n");
else
printf("%d and is less than 6 and not 0\n", r);
return (0);
}
