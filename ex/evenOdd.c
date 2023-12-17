#include <stdio.h>

int main()
{

    // 11 % 2 = 1 odd
    // 10 % 2 = 0 even

    int num;
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        // ternary operator
        (i % 2 != 0) ? printf("%d Odd\n", i) : printf("%d Even\n", i);
    }

    return 0;
}