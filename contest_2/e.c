#include <stdio.h>
#include<string.h>

int main()
{
    char S[103];
    scanf("%s", &S);

    int len = strlen(S);
    int ans=0;
    for(int i = 0;i < len;i++){
        if(S[i] == 'w')
            ans += 2;
        if(S[i] == 'v')
            ans +=1;
    }

    printf("%d", ans);

    return 0;
}