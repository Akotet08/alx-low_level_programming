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
while (i < 10)
{
int j = i + 1;
while (j < 10)
{
putchar(48 + i);
putchar(48 + j);
if (i != 8)
{
putchar(44);
putchar(32);
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
