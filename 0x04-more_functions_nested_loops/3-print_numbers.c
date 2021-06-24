#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints numbers
*
* Description: prints numbers
* Return: returns 0
*/

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('$' + '\n');
	return (0);
}
