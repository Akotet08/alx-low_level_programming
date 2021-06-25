#include "holberton.h"
#include <math.h>

/**
 * isPrime - checks if prime
 *
 * @n: number
 *
 * Description: checks if prime
 * Return: 1 for prime 0 otherwise
 */

int isPrime(long int n)
{
	int i = 5;

	if (n < 1 || n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	while (i <= sqrt(n))
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
		i += 6;
	}
	return (1);

}

/**
 * main - prints largest prime factor of 612852475143
 *
 * Description: prints largest prime factor of 612852475143
 * Return: nothing
 */

int main(void)
{
	long int number = 612852475143;
	int j;

	while (!isPrime(number))
	{
		if (number % 2 == 0)
		{
			number /= 2;
			continue;
		}
		else if (number % 3 == 0)
		{
			number /= 3;
			continue;
		}

		for (j = 5; j < number / 2; j += 6)
		{
			if (number % j == 0)
			{
				number /= j;
				break;
			}

			if (number % (j + 2) == 0)
			{
				number /= (j + 2);
				break;
			}
		}
	}
	printf("%ld\n", number);
	return (0);
}
