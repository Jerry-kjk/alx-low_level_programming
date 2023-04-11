#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string to duplicate.
 * Return: NULL if str = NULL.
 */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = str[i];
	a[len] = '\0';
	return (a);
}
