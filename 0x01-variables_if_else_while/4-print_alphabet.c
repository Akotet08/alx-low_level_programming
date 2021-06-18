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
char character = 'a' + i;
if (character != 'q' && character != 'e')
{
putchar(character);
}
i++;
}
putchar('\n');
}
