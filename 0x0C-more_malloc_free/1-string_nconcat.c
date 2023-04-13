#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of byte.
 * Return: If the function fails, it should return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	str = malloc(sizeof(char) * (l1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[l1 + 1] = s2[i];
	str[l1 + n] = '\0';
	return (str);
}
