#include <stdio.h>

int main()
{
    // Declaring Variables
    int num1;
    float num2;

    /*
        Taking Inputs.
        One as an Integer One as a Floating Point Number.
        By the way, these are called comments.
    */

    // Inputting Integers
    printf("Enter an Integer Number: ");
    scanf("%d", &num1);

    // Inputting Floating Point Number
    printf("Enter an Floating Point Number: ");
    scanf("%f", &num2);

    // Printing the scanned numbers
    printf("The integer input is: %d\n", num1);

    printf("The floating point input is: %f\n", num2);

    // From here on, try using double more than float.
    return 0;
}