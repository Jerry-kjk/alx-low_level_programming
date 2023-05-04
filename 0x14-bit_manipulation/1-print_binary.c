#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be printed.
 */

void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int temp = 1;

	temp = temp << ((sizeof(unsigned long int) * 8) - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & temp) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		temp = temp >> 1;
	}
}
