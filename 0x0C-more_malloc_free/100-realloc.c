#include "main.h"

/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block.
 * Return: pointer to new memory
 *		NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			free(new_ptr);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr != NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		while (i < old_size)
		{
			*((char *)new_ptr + i) = *((char *)ptr + i);
			i++;
		}
	}
	free(ptr);
	return (new_ptr);
}
