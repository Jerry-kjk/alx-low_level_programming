#include "main.h"

/**
 * _calloc - a function that allocates memory for an array,
 * using malloc.
 * @nmemb: size of array.
 * @size: size of element.
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
