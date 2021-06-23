#include <stdio.h>
#include "holberton.h"
/**
 * _isalpha - determines if alphabetic
 *
 * @c: ascii value of char
 *
 * Description: determines if alphabetic
 * Return: returns 1 for alphabetic; 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
