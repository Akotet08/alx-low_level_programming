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
 * rev_string - reverses a string
 *
 * @s: pointer to a character array
 *
 * Description: reverses a string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, j = strlen_(s) - 1;
	char temp;

	while (1)
	{
		if ((i == j) || (j < i))
			break;

		temp = s[i];

		s[i] = s[j];
		s[j] = temp;

		j--;
		i++;
	}

}
