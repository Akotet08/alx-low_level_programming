#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the alphabet
*
* Description: Prints alphabets)
* Return: returns 0
*/

int main(void)
{
int i = 0;
int j;
while (i < 26)
{
putchar('a' + i);
i++;
}
j = 0;
while (j < 26)
{
putchar('A' + j);
j++;
}
putchar('\n');
return (0);
}
