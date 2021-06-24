#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks if digit
 *
 * @c: character
 *
 * Description: checks if _isdigit
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 59)
	{
		return (1);
	}
	return (0);
}
