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
 * puts_half - prints half of str
 *
 * @str: pointer to a character array
 *
 * Description: prints half of str
 * Return: nothing
 */

void puts_half(char *str)
{
	int index, len = strlen_(str);

	if (len % 2 == 0)
		index = len / 2;
	else
		index = (len - 1) / 2;

	while (str[index] != '\0')
	{
		putchar(str[index]);
		index++;
	}
	putchar('\n');

}
