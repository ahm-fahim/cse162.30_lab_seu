#include <stdio.h>

int main(){
    int a,b,c,d,l,r;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    l = a + b;
    r = c + d;

    if(l > r)
        printf("Left\n");
    else if(r == l)
        printf("Balanced\n");
    else
        printf("Right\n");

    return 0;
}