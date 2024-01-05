#include <stdio.h>

int main()
{
    int H, W;
    scanf("%d %d", &H, &W);

    char S[H][W];
    int cnt = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            scanf(" %c", &S[i][j]);
            if (S[i][j] == '#')
                cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}