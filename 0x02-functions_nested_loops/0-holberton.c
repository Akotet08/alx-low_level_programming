#include <stdio.h>
#include "holberton.h"
/**
 * main - prints holberton
 *
 * Description: prints holberton
 * Return: returns 0
 */

int main(void)
{
	char str[] = "Holberton\n";
	int i = 0;

	while (i < 10)
	{
		_putchar(str[i]);
		i++;
	}

	return (0);
}
