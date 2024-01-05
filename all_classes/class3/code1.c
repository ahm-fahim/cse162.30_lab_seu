#include <stdio.h>

int main()
{
    int a;

    a = 5;
    printf("The value of a is : %d\n", a);
    getchar();

    a += 3;
    printf("The value of a is: %d\n ", a);
    getchar();

    a -= 2;
    printf("The value of a is: %d\n ", a);
    getchar();

    a *= 9;
    printf("The value of a is: %d\n ", a);
    getchar();

    a /= 6;
    printf("The value of a is: %d\n ", a);
    getchar();

    a %= 4;
    printf("The value of a is: %d\n ", a);

    return 0;
}