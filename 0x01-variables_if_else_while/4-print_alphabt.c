#include <stdio.h>

/**
* main - Entery point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char upper_case;

for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
{

if (lower_case == 'e')
{
continue;
}

if (lower_case == 'q')
{
continue;
}

putchar(lower_case);
}

putchar('\n');

return (0);
}
