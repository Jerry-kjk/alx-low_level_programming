#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: Null on faillure.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int x = 0;
	int y = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	a = malloc((sizeof(char) * x) * (sizeof(char) * (y + 1)));
	if (a == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		a[i] = s2[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
