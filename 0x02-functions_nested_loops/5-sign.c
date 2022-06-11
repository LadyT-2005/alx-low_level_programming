#include "main.h"

/**
 * print_sign - Entry point
 * @n: character to be checked
 * Description: print the sign of a number
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		return (0);
	}
return (0);
}
