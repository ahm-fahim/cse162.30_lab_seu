#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n < 0 || n > 255) return 1;

    printf("%02X",n);

    return 0;
}