#include <stdio.h>

int main() {
    int L1, R1, L2, R2;
    scanf("%d %d %d %d", &L1, &R1, &L2, &R2);  
    
    int ans = (R1 < R2 ? R1 : R2) - (L1 > L2 ? L1 : L2);
    printf("%d\n",ans > 0 ? ans : 0);

    return 0;
}
