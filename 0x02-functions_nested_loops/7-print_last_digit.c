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
		divisor *= 10;
	}
	_putchar(n);
	return (n);
}
