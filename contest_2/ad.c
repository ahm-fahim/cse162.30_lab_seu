#include <stdio.h>
#include <string.h>

int main()
{
    char s[4];
    scanf("%s", &s);

    int len = strlen(s);

    if(len==1)
        printf("%s%s%s%s%s%s", s,s,s,s,s,s);
    else if(len==2)    
        printf("%s%s%s",s,s,s);
    else
        printf("%s%s",s,s);
    
    return 0;
}