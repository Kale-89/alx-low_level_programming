#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * @a: allocation
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
{
int a = 1 + _strlen_recursion(s + 1);
return (a);
}
return (0);
}
