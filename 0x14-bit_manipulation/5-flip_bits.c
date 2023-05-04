#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		num += diff & 1;
		diff >>= 1;
	}
	return (num);
}
