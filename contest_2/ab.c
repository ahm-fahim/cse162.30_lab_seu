#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    ((a <= b && b <=c ) || (c <= b && b <= a))? printf("Yes\n"):printf("No\n");

    return 0;
}
