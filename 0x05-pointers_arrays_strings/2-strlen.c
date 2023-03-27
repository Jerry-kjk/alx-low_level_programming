#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: string.
 *
 * Return: length.
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
