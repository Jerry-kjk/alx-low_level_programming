#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program.
 * @ac: the argument count.
 * @av: an array of pointers to the arguments.
 * Return: a pointer to the concatenated string, or NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int a = 0;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[a++] = av[i][j];
		str[a++] = '\n';
	}
	str[a] = '\0';
	return (str);
}
