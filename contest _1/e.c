#include <stdio.h>

int main()
{
    int sum, a, b, c;
    scanf("%d", &sum);
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", sum - (a + b + c));
    return 0;
}