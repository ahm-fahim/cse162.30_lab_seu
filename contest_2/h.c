#include <stdio.h>
#include <string.h>

int main(){
    char s[103];
    scanf("%s", &s);

    int ans = -1;
    for(int i = 0;i <strlen(s);i++)
        if(s[i]=='a') ans = i+1;
    
    printf("%d",ans);

    return 0;
}