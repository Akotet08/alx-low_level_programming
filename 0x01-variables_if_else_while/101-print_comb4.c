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
int k = j + 1;
while (k < 10)
{
putchar(48 + i);
putchar(48 + j);
putchar(48 + k);

if (i != 7)
{
putchar(44);
putchar(32);
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
