#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    int cng = Y - X;

    int notes[] = {100, 50, 20, 10, 5, 1};

    for (int i = 0; i < sizeof(notes) / 4; i++)
    {
        int cnt = cng / notes[i];

        if (cnt > 0)
        {
            printf("%d notes of %d taka\n", cnt, notes[i]);
            cng %= notes[i]; 
        }
    }
    return 0;
}
