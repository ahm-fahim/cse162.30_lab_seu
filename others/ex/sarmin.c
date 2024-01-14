#include <stdio.h>

// Loop-based code for Collatz Conjecture
void collatz_loop(int n) {
    while (n != 1) {
        printf("%d\n", n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    printf("1\n");
}

int main() {
    // Using the result from Question 3 (209)
    int startingNumber = 209;

    // Loop-based function call
    printf("\nLoop-based Function:\n");
    collatz_loop(startingNumber);

    return 0;
}