#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y, z;
    printf("세 정수 x, y, z를 입력하세요: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("f(x, y, z) = %d\n", (x * x + y * y) * (x - y) + 5 * x - 3 * y);
    printf("f(x, y, z) = %d\n", (3 * x * x - 2 * y) * 3 * x + 30);
    printf("f(x, y, z) = %.2f\n", x + y + 20.0 / y + 30.0 / x + 50);

    return 0;
}
