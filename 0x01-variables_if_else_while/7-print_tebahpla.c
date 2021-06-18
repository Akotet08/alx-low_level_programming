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
while (i < 26)
{
putchar('z' - i);
i++;
}
putchar('\n');
return (0);
}
