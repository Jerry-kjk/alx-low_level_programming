#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: String containing numbers.
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			count = count << 1;
			if (b[i] == '1')
			{
				count = count | 1;
			}
		}
		else
		{
			return (0);
		}
	}
	return (count);
}
