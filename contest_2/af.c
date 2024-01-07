#include <stdio.h>

int main() {
    int R, C, arr[2][2];

    scanf("%d %d", &R, &C);
    scanf("%d %d %d %d", &arr[0][0], &arr[0][1], &arr[1][0], &arr[1][1]);

    int ans = arr[R - 1][C - 1];

    printf("%d\n", ans);

    return 0;
}
