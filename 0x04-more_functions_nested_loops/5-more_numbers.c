#include "holberton.h"
/**
 * more_numbers - prints numbers to 14
 *
 * Description: prints numbers to 14
 * Return: 0
 */

void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{	
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
