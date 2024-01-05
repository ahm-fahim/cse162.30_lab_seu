#include <stdio.h>

int main()
{
    /*
        3 1
       2 2 3
      1 4 5 6
     0 7 8 9 10

    */

    int row, num = 1;

    scanf("%d", &row); // 4

    for (int i = 1; i <= row; i++) // 2
    {
        for (int space = 1; space <= row - i; space++) // 4 -2 = 2
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // 2
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }
    
    printf("\n\n");

    return 0;
}