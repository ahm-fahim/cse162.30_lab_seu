#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);

    int ans =  (a + b) / 2 + (a + b) % 2;

    printf("%d",ans);

    return 0;
}