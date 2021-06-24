#include <stdio.h>
#include <stdlib.h>
/**
* main - prints numbers
*
* Description: prints numbers
* Return: returns 0
*/

void print_numbers(void)
{
	int i = 0;
	while (i < 10)
	{
		_putchar("%d", i);
		i++;
	}
	_putchar('\n');
	return (0);
}
