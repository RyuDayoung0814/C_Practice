#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int pH;

    printf("Input pH: ");
    scanf("%d", &pH);

    if(pH > 12)
        printf("강알칼리 \n");
    else if(pH > 7)
        printf("약알칼리 \n");
    else if(pH == 7)
        printf("중성 \n");
    else if(pH > 2)
        printf("약산성 \n");
    else
        printf("강산성 \n");

    return 0;
}