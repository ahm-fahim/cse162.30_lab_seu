#include <stdio.h>

int main(void)
{
    printf("We are still coding. ");
    printf("We are printing the integer number %d here.\n", 4);
    printf("We are printing the floating number %f here.\n", 4.7);
    printf("We are printing the floating point number %.3f up to 3 digits here.\n", 4.7);
    printf("We are printing the floating point number %f through integer format specifier and it is %d \n", 4.7, int(4.7));

    printf("If you see carefully , you have been using \\n and it is called and escape sequence. These are special commands\n");
    printf("Such similar commands include : \\n, \\t, \\b and so on \n");
    printf("If you want to print a character like \'A\', just write using %c and done.\n\n\n", 'A');

    return 0;
}