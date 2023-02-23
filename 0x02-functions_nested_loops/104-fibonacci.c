#include <stdio.h>

int curr = 2;
int prev = 1;
int next = 0;
int count = 2;

int main(void) {
    printf("%d, %d, ", prev, curr);

    while (count < 98) {
        next = prev + curr;
        prev = curr;
        curr = next;
        count++;

        printf("%d", curr);
        if (count < 98) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
