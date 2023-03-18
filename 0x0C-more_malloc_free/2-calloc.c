#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    if (nmemb == 0 || size == 0)
        return NULL;

    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    /* Clear allocated memory */
    char *c_ptr = ptr;
    for (unsigned int i = 0; i < nmemb * size; i++)
        c_ptr[i] = 0;

    return ptr;
}
