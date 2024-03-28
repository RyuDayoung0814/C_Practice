#include <stdio.h>

int main() {
    int n;
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &n);

    // 삼각형 출력
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
