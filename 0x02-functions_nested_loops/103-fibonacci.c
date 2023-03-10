#include <stdio.h>

int prev = 1;
int curr = 2;
int temp = 0;

int main() {
    long sum = 0;

    while (curr < 4000000) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        temp = curr;
        curr += prev;
        prev = temp;
    }

    printf("%ld\n", sum);

    return 0;
}
