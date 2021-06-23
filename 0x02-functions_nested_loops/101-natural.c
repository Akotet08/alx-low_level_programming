#include <stdio.h>
#include "holberton.h"
/**
 * main - multiples of 3 and 5
 *
 * Description: multiples of 3 and 5
 * Return: returns 0
 */

int main(void)
{
	int i = 3, sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (sum);
}
