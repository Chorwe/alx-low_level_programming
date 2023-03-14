#include "strtow.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words of
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
    int i, words = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            words++;
    }

    return (words);
}

/**
 * copy_word - Copies a word from a string to a new string
 * @str: The string to copy the word from
 * @start: The starting index of the word in the string
 * @end: The ending index of the word in the string
 *
 * Return: The new string containing the word
 */
static char *copy_word(char *str, int start, int end)
{
    int i;
    char *word;

    word = malloc(sizeof(char) * (end - start + 2));

    if (word == NULL)
        return (NULL);

    for (i = start; i <= end; i++)
    {
        word[i - start] = str[i];
    }

    word[i - start] = '\0';

    return (word);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k = 0, len, start, end;

    if (str == NULL || *str == '\0')
        return (NULL);

    len = count_words(str);

    words = malloc(sizeof(char *) * (len + 1));

    if (words == NULL)
        return (NULL);

    for (i = 0; i < len; i++)
    {
        while (str[k] == ' ')
            k++;

        start = k;

        while (str[k] != ' ' && str[k] != '\0')
            k++;

        end = k - 1;

        words[i] = copy_word(str, start, end);

        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
            {
                free(words[j]);
            }

            free(words);

            return (NULL);
        }
    }

    words[i] = NULL;

    return (words);
}
