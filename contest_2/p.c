#include <stdio.h>
#include <string.h>

int main() {
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    char S[10];
    scanf("%s", S);
    
    int idx = -1;
    for (int i = 0; i < 7; i++) {
        if (strcmp(S, days[i]) == 0) {
            idx = i;
            break;
        }
    }

    int ans = (idx <= 4) ? (5 - idx) : (12 - idx);
    printf("%d\n", ans);

    return 0;
}
