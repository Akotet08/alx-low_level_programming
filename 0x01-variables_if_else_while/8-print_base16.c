#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the alphabet
*
* Description: Prints alphabets
* Return: returns 0
*/

int main(void)
{
int i = 0;
int j;
while (i < 10)
{
putchar(48 + i);
i++;
}
j = 0;
while (j < 6)
{
putchar('a' + j);
j++;
}
putchar('\n');
return (0);
}
