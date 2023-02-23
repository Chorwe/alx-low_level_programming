#include "main.h"

/* File: _islower.c */

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else
        return 0;
}
