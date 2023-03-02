#include "main.h"
#include <stdio.h>

char *string_toupper(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // subtracting 32 from lowercase ASCII value converts it to uppercase
        }
        i++;
    }

    return str;
}

int main(void)
{
    char str[] = "hello, world!";
    printf("Original string: %s\n", str);
    string_toupper(str);
    printf("Uppercase string: %s\n", str);
    return 0;
}
