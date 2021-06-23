#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - last digit
 *
 * @n: number
 *
 * Description: determines last digit
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int divisor = 10;

	if (n < 0)
		n = -1 * n;
	while (n > 9)
	{
		n = n % divisor;
		divisor *= 10;
	}
	_putchar(11* n);
	return (n);
}
