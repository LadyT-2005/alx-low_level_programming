#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - to update value to 98
 * @n: integer
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
int mein(void)
{
	int m;
	int *p;

	p = &m;
	m = 402;
	printf("Value of 'm' before the call: %d\n", m);
	reset_to_98(p);
	printf("Value of 'm' after the call: %d\n", m);
	return (0);	
}
