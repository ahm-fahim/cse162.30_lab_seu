#include <stdio.h>
#include <limits.h>

int main()
{
    int anInteger;
    float aFloat;
    char aCharacter;
    double aDouble;

    unsigned aUnsignedInteger;
    short int aShortInteger;
    unsigned short int aUnsignedShortInteger;
    long int aLongInteger;
    unsigned long int aUnsignedLongInteger;
    long long int aLongLongInteger;
    unsigned long long aUnsignedLongLongInteger;

    printf("Size of Integer: %lu bytes\n", sizeof(anInteger));
    printf("Size of Float: %lu bytes\n", sizeof(aFloat));
    printf("Size of Character: %lu bytes\n", sizeof(aCharacter));
    printf("Size of Double: %lu bytes\n", sizeof(aDouble));

    printf("\n");

    printf("Max value of int: %d \n", INT_MAX);
    printf("Max value +1 of int: %d \n", INT_MAX + 1);
    printf("Min value of int: %d \n", INT_MIN);
    printf("Min value -1 of int: %d \n", INT_MIN - 1);

    printf("Max value of char: %d \n", CHAR_MAX);
    printf("Min Value of char: %d \n", CHAR_MIN);

    printf("\n\n");

    printf("SIze of Integer: %lu bytes\n", sizeof(anInteger));
    printf("Size of Unsigned Integer: %lu bytes\n", sizeof(aUnsignedInteger));
    printf("Size of Short Integer: %lu bytes\n", sizeof(aShortInteger));
    printf("Size of Unsigned Short Integer: %lu bytes\n", sizeof(aUnsignedShortInteger));
    printf("Size of long Integer: %lu bytes\n", sizeof(aLongInteger));
    printf("Size of Unsigned Long Integer: %lu bytes\n", sizeof(aUnsignedLongInteger));
    printf("Size of Long Long Integer: %lu bytes\n", sizeof(aLongLongInteger));
    printf("Size of Unsigned long long Integer: %lu bytes\n", sizeof(aUnsignedLongLongInteger));

    printf("\n\n");

    return 0;
}