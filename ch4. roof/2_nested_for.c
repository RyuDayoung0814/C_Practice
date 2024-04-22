/*
# ==================================================================================
# Author: Ryu DaYoung
# Affiliation: Hanjin University
# Contact: Da_rong_00@hanjin.ac.kr
#
# This script is a part of a c practice. The purpose of this script is to
# demonstrate basic c functionalities and to serve as a template for
# future projects and educational purposes at Hanjin University.
# ==================================================================================
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int start, end;
    int temp;

    // 두 정수 입력
    printf("두 정수 입력: ");
    scanf("%d %d", &start, &end);

    // Swap
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    // 정수 사이의 범위 지정(for)
    for (int dan = start; dan <= end; dan++) {
        // 구구단 출력
        for (int i = 1; i < 10; i++) {
            printf("%d x %d = %d\n", dan, i, dan * i);
            }
        printf("\n");
    }
    return 0;
}