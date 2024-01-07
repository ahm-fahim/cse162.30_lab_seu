#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < k; i++) {
        // Remove the initial element
        for (int j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];
        
        arr[n - 1] = 0;// Append a 0 to the end
    }

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) 
            printf(" ");
    }

    return 0;
}
