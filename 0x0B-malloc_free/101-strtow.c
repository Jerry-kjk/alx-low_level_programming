#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * word_len - locates the index marking the end of the.
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		/* iterate until end of string or a space is found */
		len++;
		index++;
	}

	return (len);
}

/**
 * strtow - a function that splits a string into words.
 * @str: The string to split.
 * Return: NULL if str == NULL or str == "".
 */

char **strtow(char *str)
{
	int i;
	int j;
	int k;
	int len = 0;
	int words;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	arr = malloc((words + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = 0; i < words; ++i)
	{
		while (str[j] == ' ')
			j++;
		while (str[j + len] != ' ' && str[j + len] != '\0')
			len++;
		arr[i] = malloc((len + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			for (k = 0; k < i; ++k)
				free(arr[k]);
			free(arr);
			return (NULL);
		}
		for (k = 0; k < len; ++k)
			arr[i][k] = str[j + k];
		arr[i][len] = '\0';
		j += len;
	}
	arr[i] = NULL;
	return (arr);
}
