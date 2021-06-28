#include "holberton.h"
/**
 * print_array - prints n slices of the array
 *
 * @a: pointer to an int array
 * @n: length to be printed
 *
 * Description: prints n slices of the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index != n - 1)
			printf(", ");
		index++;
	}
	putchar('\n');

}
