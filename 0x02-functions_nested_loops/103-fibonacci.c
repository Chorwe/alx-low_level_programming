#include <stdio.h>

int main() {
    int prev = 1, curr = 2, sum = 0;
    while (curr < 4000000) {
        int temp = curr;
        curr += prev;
        prev = temp;
        if (prev % 2 == 0) {
            sum += prev;
        }
    }
    printf("%d\n", sum);
    return 0;
}
