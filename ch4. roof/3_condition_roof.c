#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 변수 선언
    int cnt2, cnt3, cnt5;

    // 변수 초기화
    cnt2 = 0;
    cnt3 = 0;
    cnt5 = 0;

    // 1 부터 100까지 반복
    for (int i = 1; i <= 100; i++) {
        printf("i 값은 %d 입니다.\n", i);

        // 2의 배수이면 카운터 증가
        if (i % 2 == 0) {
            printf("2의 배수 증가\n");
            cnt2++;
            }

        // 3의 배수이면 카운터 증가
        if (i % 3 == 0) {
            printf("3의 배수 증가\n");
            cnt3++;
            }

        // 5의 배수이면 카운터 증가
        if (i % 5 == 0) {
            printf("5의 배수 증가\n");
            cnt5++;
            }
            
        printf("\n");
    }

    printf("Resuults: \n - 2의 배수: %d개\n - 3의 배수: %d개\n - 5의 배수: %d개", cnt2, cnt3, cnt5);

    return 0;
}
