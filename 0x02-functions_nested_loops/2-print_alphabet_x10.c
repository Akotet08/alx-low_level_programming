#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - prints Albhabet
 *
 * Description: prints Albhabet
 * Return: returns 0
 */

void print_alphabet_x10(void)
{
	int i = 0, j = 0;

	while (j < 10)
	{
		while (i < 26)
		{

		_putchar('a' + i);
		i++;

		}
		_putchar('\n');
		j++;
	}


}
