#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: pointer to the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available or str is NULL
 */
char *_strdup(char *str)
{
    char *dup_str;
    unsigned int i, len;

    if (str == NULL)
        return (NULL);

    len = 0;
    while (str[len] != '\0')
        len++;

    dup_str = malloc(sizeof(char) * (len + 1));
    if (dup_str == NULL)
        return (NULL);

    i = 0;
    while (i < len)
    {
        dup_str[i] = str[i];
        i++;
    }
    dup_str[len] = '\0';

    return (dup_str);
}
