#include <stdio.h>
#include <stdbool.h>

int main() {
    char S[4];
    scanf("%s", S);

    int count[26] = {0};  
    bool flag = false;

    for (int i = 0; i < 3; i++) {
        count[S[i] - 'a']++;
    }

    char ans = -1;
    for (int i = 0; i < 3; i++) {
        if (count[S[i] - 'a'] == 1) {
            ans = S[i];
            flag = true;
            break;
        }
    }
  
    (flag) ? printf("%c\n", ans): printf("-1\n");

    return 0;
}
