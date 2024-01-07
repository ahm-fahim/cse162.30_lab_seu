#include <stdio.h>

int main() {
    int n, x;
    scanf("%d %d", &n, &x);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int ans;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            ans = i + 1;
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
