#include "main.h"

/**
 * _strlen - Entry point.
 * @s: Integer.
 * Return: int.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
