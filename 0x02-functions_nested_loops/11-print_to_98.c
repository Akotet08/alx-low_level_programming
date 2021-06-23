#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints to 98
 *
 * @n: number
 *
 * Description: prints to 98
 * Return: returns 0
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
		return;
	}
	else
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
}
