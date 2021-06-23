#include <stdio.h>
#include "holberton.h"
/**
 * print_sign - determines sign
 *
 * @n: number
 *
 * Description: determines sign
 * Return: returns 1 for alphabetic; 0 for 0;
 * -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
