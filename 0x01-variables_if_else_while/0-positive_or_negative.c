#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether it is positive or negative
 *
 * Return : Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Input n:");
scanf("%d", &n);
if (n > 0)
{
printf("n is positive\n");
}
else if (n == 0)
{
printf("n is zero\n");
}
else
{
printf("n is negative\n");
}
return (0);
}
