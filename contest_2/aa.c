#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ans = N%100;
    printf("%02d", ans);

    return 0;
}
