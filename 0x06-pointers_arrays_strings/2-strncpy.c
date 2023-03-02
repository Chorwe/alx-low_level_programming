#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the src string to dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest;

    /* Copy the characters of src up to n bytes to dest */
    while (n > 0 && *src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }

    /* If n is greater than the length of src, add null bytes to dest */
    while (n > 0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }

    return dest;
}
