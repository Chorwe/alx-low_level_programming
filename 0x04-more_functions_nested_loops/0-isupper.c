#include "main.h"

int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (_isupper(c))
        printf("The character %c is uppercase.\n", c);
    else
        printf("The character %c is not uppercase.\n", c);

    return (0);
}
