#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF) // End Of File
    {
        printf("%d", n * n);
    }

    return 0;
}
