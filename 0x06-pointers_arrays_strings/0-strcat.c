#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    /* Move the pointer to the end of dest */
    while (*ptr)
        ptr++;

    /* Append the characters of src to dest */
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    /* Add a terminating null byte */
    *ptr = '\0';

    return dest;
}
