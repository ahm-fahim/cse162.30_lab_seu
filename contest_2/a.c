#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int ans = 1;
    for (int i = 1; i <= y; i++)
        ans = ans * x;

    printf("%d\n", ans);

    return 0;
}