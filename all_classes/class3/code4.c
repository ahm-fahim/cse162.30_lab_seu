#include <stdio.h>

int main()
{

    int n1 = 3, n2 = 5;

    printf("%d = %d: %d\n", n1, n2, n1 == n2);
    printf("%d != %d: %d\n", n1, n2, n1 != n2);
    printf("%d > %d: %d\n", n1, n2, n1 > n2);
    printf("%d < %d: %d\n", n1, n2, n1 < n2);
    printf("%d >= %d: %d\n", n1, n2, n1 >= n2);
    printf("%d <= %d: %d\n", n1, n2, n1 <= n2);

    return 0;
}

