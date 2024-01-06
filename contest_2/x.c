#include <stdio.h>

int main() {
    int k,hrs ,min;
    scanf("%d", &k);

    hrs = (21 + k / 60) % 24;
    min = k % 60;

    printf("%02d:%02d\n", hrs, min);

    return 0;
}
