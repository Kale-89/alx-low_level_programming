#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 *@s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
int i = 0, length, count = 0;

for (length = 0; s[length] != '\0'; length++)
{
count = count + 1;
}

for (i = count - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

