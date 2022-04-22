#include "main.h"

/**
 *_strncpy - copy src into dest.
 *@des: first string.
 *@sr: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *des, char *sr, int n)
{
int i = 0, j = 0;

while (n > j)
{
if (sr[j] == '\0')
{
for (; j < n; j++)
{
des[i] = '\0';
i++;
}
}
else
{
des[i] = sr[j];
j++;
i++;
}
}

return (des);
}
