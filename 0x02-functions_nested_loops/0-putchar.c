#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 * writes out _putchar to stdout, followed by a new line
 *
 * Return - Always 0 (Success)
 */
int main()
{
char c[8] = "_putchar";
int i;
for (i = 0; i < 8; i++);
{
_putchar(c[i]);
}
_putchar('\n');
 
return (0);
}