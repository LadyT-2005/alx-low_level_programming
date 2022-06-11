#include "main.h"

/**
 * _abs - Entry point
 * @c: checker to be checked
 * Description: absolute value
 * Return: 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		_abs(c);
		_putchar(c);
	}
	else if (c > 0)
	{
		_abs(c);
		_putchar(c);
	}
	else
	{
		_putchar('0');
	}
return (0);
}
