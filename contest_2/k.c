#include <stdio.h>

int main(){
    int n;
    scanf("%d ", &n);

    int ans = 0;
    while(n>0){
        int a;
        scanf("%d", &a);
        ans += a;
        n--;
    }

    printf("%d",ans);

    return 0;
}