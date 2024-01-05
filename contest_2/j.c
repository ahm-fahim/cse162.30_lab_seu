#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);

    double ans =(double) b/a;
    printf("%.3f",ans);
    
    return 0;
}