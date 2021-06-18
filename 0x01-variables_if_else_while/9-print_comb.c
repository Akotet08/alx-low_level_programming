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
putchar(48 + i);
if (i != 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}
