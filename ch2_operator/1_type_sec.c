#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;
    float flo1, flo2;

    printf("2 Integer: ");
    scanf("%d %d", &num1, &num2);
    printf("%5d %5d \n", num1, num2);
    printf("%#x %#x \n", num1, num2);
    printf("%#5o %#5o \n\n", num1, num2);


    printf("2 Real Number: ");
    scanf("%f %f", &flo1, &flo2);
    printf("%5.2f, %5.2f\n", flo1, flo2);

    return 0;
}
