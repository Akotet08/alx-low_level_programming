#include "holberton.h"
/**
 * swap_int - swaps a and b
 *
 * @a: pointer to a
 * @b: pointer to b
 *
 * Description: swaps a and b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int *temp = a;

	*a = *b;
	*b = *temp;
}
