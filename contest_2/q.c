#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; 
    scanf("%s", S);

    int mid= strlen(S) / 2;
    printf("%c\n", S[mid]);

    return 0;
}
