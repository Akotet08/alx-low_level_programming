#include <stdio.h>
#include "holberton.h"
/**
 * main - prints Albhabet
 *
 * Description: prints Albhabet
 * Return: returns 0
 */

int main(void)
{
	int i = 0;

	while (i < 26)
	{
		_putchar('a' + i);
		i++;
	}

	return (0);
}
