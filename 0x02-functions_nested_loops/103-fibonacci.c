#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long a = 0, b = 1, c;
	float tot_sum;

	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;

		if ((c % 2) == 0)
			tot_sum += c;

		a = b;
		b = c;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
