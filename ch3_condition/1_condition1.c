#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int a, b;

    printf("Input a, b: ");
    scanf("%d %d", &a, &b);

    if(a < b){
        printf("a is smaller \n");
        a += 10;
        b -= 5;
    }
    else if(a > b){
        printf("a is bigger \n");
        a -= 10;
        b += 5;
    }
    else{
        printf("same \n");
        a = 100;
        b = 100;
    }

    printf("[Result] a: %d, b: %d\n", a, b);

    return 0;
}