#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of new array
 *
 * Return: returns value 98 if malloc fails or Pointer to new allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
	{
		exit(98);
	}
	return (mem_alloc);
}
