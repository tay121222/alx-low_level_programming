#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the old  memory allocated
 * @old_size: the size of ptr
 * @new_size: the size of the new memory
 *
 * Return: returns pointer to new allocacted memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	i = 0;
	old_ptr = ptr;

	while (i < old_size && i < new_size)
	{
		new_ptr[i] = old_ptr[i];
		i++;
	}

	free(ptr);
	return (new_ptr);
}
