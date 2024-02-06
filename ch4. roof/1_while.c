#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int menu;
    int num1, num2;
    int result;

    int counter = 0;

    // 1. 반복문 진입(while) - 5번 이후 종료
    while (counter < 5) {
        // 1-1. 메뉴 출력
        printf("[Menu]\n - 1. 곱하기\n - 2. 나누기\n");

        // 1-2. 메뉴 값 입력
        printf("Input Menu: ");
        scanf("%d", &menu);

        // 1-3. 정수 두개 입력
        printf("Input num2, num2: ");
        scanf("%d %d", &num1, &num2);

        // 1-4. 메뉴 값에 따라 곱/나누기 연산
        switch (menu) {
        case 1:
        result = num1 * num2;
        break;

        case 2:
        result = num1 / num2;
        break;

        default:
        result = -1;
        }
        
        // 1-5. 연산 완료!
        printf("result: %d\n", result);
        counter++;
    }
}