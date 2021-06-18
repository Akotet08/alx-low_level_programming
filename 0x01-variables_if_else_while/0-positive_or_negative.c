#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the alphabet
*
* Description: Prints alphabets
* Return: returns 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d\n is zero", n);
}
return (0);
}
