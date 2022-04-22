#include "main.h"

/**
 *_strncat - concatinate 2 strings.
 *@des: first string.
 *@sr: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncat(char *des, char *sr, int n)
{
int i = 0, j = 0;

while (des[i] != '\0')
i++;

while (sr[j] != '\0' && n > j)
{
des[i] = sr[j];
j++;
i++;
}
if (n > 0)
{
des[i] = '\0';
}

return (des);
}
