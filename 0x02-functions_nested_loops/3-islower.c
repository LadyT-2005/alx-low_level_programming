#include "main.h"

/**
 * _islower -Entry point
 * int c - checker
 * Description: to check for lowercase
 * Return: 0
 */
int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
	
