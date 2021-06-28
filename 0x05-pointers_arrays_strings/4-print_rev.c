#include "holberton.h"

/**
 * strlen_ - length of a string
 *
 * @s: pointer to a character array
 *
 * Description: length of a string
 * Return: length
 */

int strlen_(char *s)
{
	int count = 0, index = 0;

	while (s[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);

}

/**
 * print_rev - prints a string in reverse order
 *
 * @s: pointer to a character array
 *
 * Description: prints a string in reverse order
 * Return: nothing
 */

void print_rev(char *s)
{
	int reverse_index = strlen_(s) - 1;

	while (reverse_index >= 0)
	{
		putchar(s[reverse_index]);
		reverse_index--;
	}
	putchar('\n');

}
