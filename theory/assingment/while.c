#include <stdio.h>
int main()
{
    int n, rev = 0, rem, num;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    (num == rev)?printf("%d is a palindrome.\n", num):printf("%d is not a palindrome.\n", num);

    return 0;
}