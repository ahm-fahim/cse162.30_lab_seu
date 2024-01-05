#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
        printf("%c is Vowel\n", ch);
        break;
    case 'e':
        printf("%c is Vowel\n", ch);
        break;
    case 'i':
        printf("%c is Vowel\n", ch);
        break;
    case 'o':
        printf("%c is Vowel\n", ch);
        break;
    case 'u':
        printf("%c is Vowel\n", ch);
        break;
    default:
        printf("%c  is Constant\n", ch);
        break;
    }

    return 0;
}