#include <stdio.h>

int main()
{
    /*
    121 = 121 // palindrome
    123 = 321 // not palindrome
    */

    int n, reversed = 0; // 1221 = 1221 , 123 = 321
    scanf("%d", &n);

    int b = n; // 1221

    while (n != 0)
    {
        int reminder = n % 10;
        reversed = reversed * 10 + reminder;
        n = n / 10;
    }

    if (b == reversed)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}