#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 *
 * @n: length of line
 *
 * Description: prints diagonal line
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
