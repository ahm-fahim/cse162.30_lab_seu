#include <stdio.h>

int main()
{

    int  n1 = 3, n2 = 5;

    printf("Bitwise And Operation: %d\n", n1 & n2);
    printf("Bitwise OR Operation: %d\n", n1 | n2);
    printf("Bitwise X-OR Operation: %d\n", n1 ^ n2);
    printf("Bitwise NOT Operation: %d %d\n", ~n1, ~n2);
    printf("Bitwise Right shift (by 1) Operation: %d  %d\n", n1 >> 1, n2 >> 1);
    printf("Bitwise left shift (by 1) Operation: %d %d\n", n1 << 1, n2 << 1);

    return 0;
}


// right shift  mean divided by 2
// left shift mean multiple by 2