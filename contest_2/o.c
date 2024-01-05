#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int cnt = 1;  

    if (a != b && a != c && a != d && a != e)
        cnt++;
    if (b != c && b != d && b != e) 
        cnt++;
    if (c != d && c != e)
        cnt++;
    if (d != e)
        cnt++;

    printf("%d\n", cnt);

    return 0;
}
