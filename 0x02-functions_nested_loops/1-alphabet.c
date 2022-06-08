#include "main.h"

/**
 *print_alphabet - Entry point
 *
 *Description: print alphabet in lower case followed by a new line
 *
 *Return: void
 *
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
