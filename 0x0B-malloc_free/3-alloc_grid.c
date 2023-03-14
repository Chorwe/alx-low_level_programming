#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
    int **arr;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    arr = malloc(height * sizeof(int *));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < height; i++)
    {
        arr[i] = malloc(width * sizeof(int));
        if (arr[i] == NULL)
        {
            for (j = i - 1; j >= 0; j--)
                free(arr[j]);
            free(arr);
            return (NULL);
        }

        for (j = 0; j < width; j++)
            arr[i][j] = 0;
    }

    return (arr);
}
