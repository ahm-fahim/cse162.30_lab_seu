#include <stdio.h>
#include <string.h>

int main(){
    char str[]="atcoder";

    int l,r;
    scanf("%d %d", &l, &r);

    for(int i=l-1;i< r;i++)
        printf("%c", str[i]);
    
    return 0;
}