#include <stdio.h>

int main()
{
    int month, days;

    scanf("%d", &month);

    if (month < 1 || month > 12)
    {
        printf("Input 1 - 12.\n");
        return 1;
    }

    if (month == 2)
    {
        days = 32;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;
    }
    else
    {
        days = 31;
    }

    printf("Month = %d Days = %d.\n", month, days);

    return 0; 
}
