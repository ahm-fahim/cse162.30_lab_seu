#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    printf("%d\n", y + (2 - (y % 4) + 4) % 4);

    return 0;
}
