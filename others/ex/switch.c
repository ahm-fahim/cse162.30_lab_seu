#include <stdio.h>

int main(){

    char c;
    scanf("%c", &c); //e

    switch (c) //c
    {
    case 'a': //!= e  if(c=='a')
        printf("%c is vowel\n", c);
        break;
    case 'e': // == e else if( c=='e')
        printf("%c is vowel\n", c);
        break;
    case 'i':
        printf("%c is vowel\n", c);
        break;
    case 'o':
        printf("%c is vowel\n", c);
        break;
    case 'u':
        printf("%c is vowel\n", c);
        break;
    default:
        printf("%c is consonant\n", c);
        break;
    }
}