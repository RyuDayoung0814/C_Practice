#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B;
    printf("두 정수 A와 B를 입력하세요: ");
    scanf("%d %d", &A, &B);

    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A / B = %.2f\n", (float)A / B);
    printf("A * B = %d\n", A * B);
    printf("A %% B = %d\n", A % B);

    return 0;
}
