#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - every minute
 *
 * Description: prints every minute
 * Return: returns 0
 */

void main(void)
{
	int i = 0, j = 0; 

	while (i < 24)
	{
		while (j < 60)
		{
			if (i < 10)
			{
				putchar('0');
				putchar('0' + i);
			}
			else putchar('0' + i);

			putchar(':');

			if (j < 10)
			{
				putchar('0');
				putchar('0' + j);
			}
			else
			{
				putchar('0' + j);
			}
			j++;
			printf("%d", j);
			putchar('\n');
		}
		i++;
	}
}
