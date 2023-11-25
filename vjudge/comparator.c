#include <stdio.h>

int main()
{
    FILE *eOut, *gOut;
    char eVal, gVal;

    eOut = fopen("ExpectedOutput.txt", "r");
    gOut = fopen("GetOutput.txt", "r");

    while (1)
    {
        eVal = fgetc(eOut);
        gVal = fgetc(gOut);

        if (eVal != gVal || eVal == EOF || gVal == EOF)
            break;
    }
    (eVal != EOF || gVal != EOF) ? printf("Wrong Answer!\n") : printf("Accepted\n");

    return 0;
}