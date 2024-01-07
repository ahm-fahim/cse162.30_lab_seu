#include <stdio.h>

int main(){
    int arr[7];

    //input array element
    for(int i = 0; i<6 ; i++)
        scanf("%d", &arr[i]);

    //display array element
    for(int i = 0; i<6 ; i++)
        printf("%d ", arr[i]);
    
    printf("\n"); //line break

    int mx = arr[0]; // store max element
    int mn = arr[0]; // store min element

    for(int i = 0; i<6 ; i++){
        //maximum
        if(arr[i] >= mx)
            mx = arr[i];
        //minimum
        if(arr[i]<= mn)
            mn = arr[i];
    }

    //display max element
    printf("%d\n", mx);

    //display min element
    printf("%d\n", mn);

    return 0;
}