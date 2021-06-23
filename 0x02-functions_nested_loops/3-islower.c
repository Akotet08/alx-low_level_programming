#include <stdio.h>
#include "holberton.h"
/**
 * _islower - prints holberton
 *
 * @c: ascii value of char
 *
 * Description: prints holberton
 * Return: returns 1 for lowercase; 0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
