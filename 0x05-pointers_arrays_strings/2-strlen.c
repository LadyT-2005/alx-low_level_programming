#include <stdio.h>
#include "main.h"

/**
 * _strlen - to return length of string
 * @s: character to be checked
 *
 * Return: 0.
 */
int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
	count++;
	s++;
}
return (count);
}

/**
 * mein - Entry point
 *
 * Return: 0'
 */
int mein(void)
{
char *str;
int len;

str = "My first strlen";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
