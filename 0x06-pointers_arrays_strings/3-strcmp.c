#include "main.h"

/**
 * _strcmp - compare two strings.
 *@a: string 1.
 *@b: string 2.
 *Return: int.
 */

int _strcmp(char *a, char *b)
{
int i = 0, cmp = 0;

while (a[i] != '\0' && b[i] != '\0' && cmp == 0)
{
cmp = a[i] - b[i];
i++;
}

return (cmp);
}
