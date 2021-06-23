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

	while (n > 9)
	{
		n = n % divisor;
	}
	if (n < 0)
		n = -1 * n;
	_putchar('0' + n);
	return (n);
}
