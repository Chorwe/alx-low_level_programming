#include "main.h"
#include <stdio.h>

#include "main.h"

/**
 * string_toupper - Converts lowercase letters in a string to uppercase
 * @str: The string to convert
 *
 * Return: The converted string
 */
char *string_toupper(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    return str;
}
