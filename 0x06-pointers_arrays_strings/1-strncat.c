#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest;

    /* Move the pointer to the end of dest */
    while (*ptr)
        ptr++;

    /* Append the characters of src up to n bytes to dest */
    while (*src && n > 0)
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* Add a terminating null byte */
    *ptr = '\0';

    return dest;
}
