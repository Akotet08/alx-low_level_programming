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
 * _strcpy - copies src to dest
 *
 * @dest: pointer to destination array
 * @src: pointer to source array
 *
 * Description: copies src to dest
 * Return: returns pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (index < strlen_(src))
	{
		dest[index] = src[index];
		if (index == strlen_(src) - 1)
			dest[index + 1] = '\0';
		index++;
	}
	return dest;
}
