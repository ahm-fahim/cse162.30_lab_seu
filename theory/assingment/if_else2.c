#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d Is Even.\n", num) : printf("%d Is Odd.\n", num);

    return 0;
}
