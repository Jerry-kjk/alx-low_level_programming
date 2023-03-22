#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	unsigned long a = 0, b = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = a + b;
		printf("%lu", sum);

		a = b;
		b = sum;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

