#include <stdio.h>
#include "holberton.h"
/**
 * _abs - absolute value
 *
 * @n: number
 *
 * Description: determines absolute value
 * Return: returns absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
