#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        char c = 'A' + i;
        printf("%c", c);
    }

    return 0;
}