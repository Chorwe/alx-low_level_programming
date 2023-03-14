#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to newly allocated space containing the concatenated string,
 *         or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i, j;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;

    while (s2[len2] != '\0')
        len2++;

    result = malloc(sizeof(char) * (len1 + len2 + 1));

    if (result == NULL)
        return (NULL);

    for (i = 0; s1[i] != '\0'; i++)
        result[i] = s1[i];

    for (j = 0; s2[j] != '\0'; j++)
        result[i + j] = s2[j];

    result[i + j] = '\0';

    return (result);
}
