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
	for (int i = 0; i < 10; i++)
	{
		_putchar(str[i]);
	}	
	
	return (0);
}
