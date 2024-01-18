#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("정수 입력: ");
    int n;
    scanf("%d", &n);
    printf("입력된 정수는 '%d' 입니다.\n", n);

    printf("실수 입력: ");
    float f;
    scanf("%f", &f);
    printf("입력된 실수는 '%f' 입니다.\n", f);

    printf("문자열 입력: ");
    char str[100];
    scanf("%s", str);
    printf("입력된 문자열은  \"%s\" 입니다.\n", str);

    return 0;
}