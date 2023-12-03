#include <stdio.h>

void cookeRice(int water, int rice){
    if(rice > 0 && water > 0){
        printf("Rice cooked.\n");
    }else{
        printf("Rice Not Cooked\n");
    }
}

int sum(int a, int b){
    return a + b;
}

int main(){

    int water = 2;
    int rice = 1;

    cookeRice(water, rice);

    int a ;
    int b;



    scanf("%d %d", &a, &b);
    printf("sum = %d\n", sum(a,b));

    return 0;
}