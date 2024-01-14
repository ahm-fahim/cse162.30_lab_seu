#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) 
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }§

    // 1 2 1 2 1
    // 1 1 1 2 2

    if ((arr[0] == arr[2] && arr[3] == arr[4]) || (arr[0] == arr[1] && arr[2] == arr[4])) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
