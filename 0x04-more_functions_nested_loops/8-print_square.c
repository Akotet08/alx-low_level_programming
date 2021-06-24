#include "holberton.h"
/**
 * print_square - prints square
 *
 * @size: length of line
 *
 * Description: prints square
 * Return: nothing
 */

void print_square(int size)
{
	int i = 0, j = 0;

	while (i < size)
	{
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}