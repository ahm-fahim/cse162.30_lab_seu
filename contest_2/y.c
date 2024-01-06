#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    // Calculate the segment to which X belongs
    int segment = (X - 1) / N;

    char result = 'A' + segment;

    printf("%c\n", result);

    return 0;
}
