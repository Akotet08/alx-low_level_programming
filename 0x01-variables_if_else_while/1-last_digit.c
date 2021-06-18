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
int mod, divisor = 10;
srand(time(0));
n = rand() - RAND_MAX / 2;
while (mod > 9)
{
mod = n % divisor;
divisor *= 10;
}
if (mod > 5)
{
printf("Last digit of %d is %d and is greater than 5 \n", n, mod);
}
else if (mod == 0)
{
printf("Last digit of %d is %d and is 0 \n", n, mod);
}
else if (mod < 6 && mod != 0)
{
printf("Last digit of %d is %d and is less than 6 \n", n, mod);
}
return (0);
}
