#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks > 100 || marks < 0)
        printf("Invalid Input \n");
    else if (marks >= 40 && marks <45)
        printf("Got D\n");
    else if (marks >= 45 && marks < 50)
        printf("Got C\n");
    else if (marks >= 50 && marks < 55)
        printf("Got C+\n");
    else if (marks >= 55 && marks < 60)
        printf("Got B-\n");
    else if (marks >= 60 && marks < 65)
        printf("Got B+\n");
    else if (marks >= 65 && marks < 70)
        printf("Got A-\n");
    else if (marks >= 70 && marks < 80)
        printf("Got A\n");
    else if (marks >= 80 && marks <= 100)
        printf("Got A+\n");
    else
        printf("Failed\n");

    return 0;
}