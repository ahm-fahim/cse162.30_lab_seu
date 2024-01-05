#include <stdio.h>
#include <limits.h>

int main(){
    int x,y,n;
    scanf("%d %d %d",&x, &y, &n);

    y = (y < x * 3) ? y : x * 3;
    int cost = (n % 3) * x + (n / 3) * y;
  
    printf("%d\n", cost);

    return 0;
}