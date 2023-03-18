#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements
 *           of size bytes each and initializes it to 0.
 * @nmemb: Number of elements to be allocated.
 * @size: Size of each element.
 *
 * Return: If memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i, sz;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sz = nmemb * size;
	mem = malloc(sz);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < sz; i++)
		mem[i] = 0;

	return ((void *) mem);
}
