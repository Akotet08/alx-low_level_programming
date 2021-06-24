#include "holberton.h"
/**
 * print_most_numbers - prints numbers except for 2 and 4
 *
 * Description: prints numbers except for 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
