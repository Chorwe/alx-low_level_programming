#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
    char *p = s;
    char *leetspeak = "aAeEoOtTlL";
    char *code = "4433007711";

    while (*p)
    {
        int i;

        for (i = 0; leetspeak[i]; i++)
        {
            if (*p == leetspeak[i])
            {
                *p = code[i];
                break;
            }
        }
        p++;
    }

    return s;
}
