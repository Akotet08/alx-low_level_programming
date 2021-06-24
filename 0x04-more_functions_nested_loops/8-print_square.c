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
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i <= 0)
		_putchar('\n');
}
