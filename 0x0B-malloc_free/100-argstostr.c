#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int i, j, k, len;

    if (ac == 0 || av == NULL)
        return (NULL);

    len = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            len++;
        len++;
    }

    str = malloc(sizeof(char) * len);
    if (str == NULL)
        return (NULL);

    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            str[k++] = av[i][j];
        str[k++] = '\n';
    }

    str[k] = '\0';
    return (str);
}
