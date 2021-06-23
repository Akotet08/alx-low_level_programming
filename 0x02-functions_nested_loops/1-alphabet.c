#include <stdio.h>
#include "holberton.h"
/**
 * main - prints Albhabet
 *
 * Description: prints Albhabet
 * Return: returns 0
 */

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}
	_putchar('\n');

}
