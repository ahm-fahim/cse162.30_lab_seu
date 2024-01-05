#include <stdio.h>

int main()
{

    int pos = 1, neg = 0;

    printf("AND: \n");
    printf("%d && %d: %d\n", neg, neg, neg && neg);
    printf("%d && %d: %d\n", neg, pos, neg && pos);
    printf("%d && %d: %d\n", pos, neg, pos && neg);
    printf("%d && %d: %d\n\n", pos, pos, pos && pos);

    printf("OR: \n");
    printf("%d || %d: %d\n", neg, neg, neg || neg);
    printf("%d || %d: %d\n", neg, pos, neg || pos);
    printf("%d || %d: %d\n", pos, neg, pos || neg);
    printf("%d || %d: %d\n\n", pos, pos, pos || pos);

    printf("XOR: \n");
    printf("%d ^ %d: %d\n", neg, neg, neg ^ neg);
    printf("%d ^ %d: %d\n", neg, pos, neg ^ pos);
    printf("%d ^ %d: %d\n", pos, neg, pos ^ neg);
    printf("%d ^ %d: %d\n\n", pos, pos, pos ^ pos);

    return 0;
}
