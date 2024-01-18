#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int year, month, day;
    char name[20]="[본인이름]";
    double pi;

    year = 2023;
    month = 12;
    day = 28;
    pi = 3.14159;

    printf("오늘은 %d년 %d월 %d일입니다.\n", year, month, day);
    printf("내 이름은 %s입니다.\n", name);
    printf("1 + 2 = %d\n", 1 + 2);
    printf("파이의 값은 %.6f입니다.\n", pi);

    return 0;
}