#include "holberton.h"
/**
 * print_triangle - prints triangle
 *
 * @size: length of line
 *
 * Description: prints triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i = 1, j, k;

	while (i <= size)
	{
		j = size - i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		k = i;
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}
}
