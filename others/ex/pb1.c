#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
        printf("4.00\n");
    else if (marks >= 80 && marks <= 89)
        printf("3.00\n");
    else if (marks >= 70 && marks <= 79)
        printf("2.00\n");
    else if (marks >= 60 && marks <= 69)
        printf("1.00\n");
    else
        printf("Fail\n");

    return 0;
}