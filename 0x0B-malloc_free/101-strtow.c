#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 * Return: The number of words in the string.
 */

int word_len(char *str);

int count_words(char *str)
{
	int count = 0;
	int len = 0;
	int i = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			count++;
			i += word_len(str + i);
		}
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
	char **arr;
	int i = 0;
	int words;
	int j;
	int letters;
	int l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = count_words(str);
	if (words == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);
		arr[j] = malloc(sizeof(char) * (letters + 1));
		if (arr[j] == NULL)
		{
			for (; j >= 0; j--)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			arr[j][l] = str[i++];
		arr[j][l] = '\0';
	}
	arr[j] = NULL;
	return (arr);
}
