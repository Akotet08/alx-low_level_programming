#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints quote
 *
 * Description - prints quote without printf
 * Return: returns 1
 */

int main(void)
{
	fwrite("and that piece of art is useful\"\
	 - Dora Korpar, 2015-10-19\n", 59, 1, stderr);
	exit(EXIT_FAILURE);
	return (1);
}
