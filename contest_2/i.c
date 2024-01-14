#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i =0;i< n;i++)
        scanf("%d", &arr[i]);
    
    int mx = arr[0];
    int ans = 0;

    for(int i=0;i<n;i++){
        if(arr[i]>mx) {
            mx = arr[i];
            ans = i;
        }
    }

    printf("%d", ans+1);

    return 0;
}

// 3 55 22 44 54 7