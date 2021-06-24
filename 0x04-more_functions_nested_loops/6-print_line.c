#include "holberton.h"
/**
 * print_line - prints line
 *
 * @n: length of line
 *
 * Description: prints line
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
