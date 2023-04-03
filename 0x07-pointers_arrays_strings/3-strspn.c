#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be evaluated.
 * @accept: prefix to be measured.
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int n;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				n = 1;
			}
		}
		if (n == 0)
		{
			return (k);
		}
	}

	return (0);
}
