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
		sum += i;
		i += 3;
	}

	i = 5;

	while (i < 1024)
	{
		sum += i;
		i += 5;
	}
	printf("%d\n", sum);
	return (0);
}
