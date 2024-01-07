#include <stdio.h>

int main() {
    int H, W, R, C;
    scanf("%d %d %d %d", &H, &W, &R, &C);

    int cnt = 0;

    if (R > 1) cnt++;
    if (R < H) cnt++;
    if (C > 1) cnt++;
    if (C < W) cnt++;

    printf("%d\n", cnt);

    return 0;
}
