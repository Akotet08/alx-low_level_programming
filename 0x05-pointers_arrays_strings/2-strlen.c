#include "holberton.h"
/**
 * _strlen - length of a string
 *
 * @s: pointer to a character array
 *
 * Description: length of a string
 * Return: length
 */

int _strlen(char *s)
{
	int count = 0, index = 0;

	while (s[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);

}
