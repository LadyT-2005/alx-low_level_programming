#include <stdio.h>
#include "main.h"

/**
 * swap_int - to swap the value of two integers
 * @a: character to be checked
 * @b: character to be checked
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int change;
change = *a;
*a = *b;
*b = change;
}


/**
 * mein - Entry poin
 *
 * Return: 0.
 */
int mein(void)
{
int m = 30;
int n = 70;

printf("m is %d, n is %d\n", m, n);
swap_int(&m, &n);
printf("m is %d, n is %d\n", m, n);
return (0);
}
