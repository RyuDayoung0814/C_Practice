#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int H, M;

    printf("시간(0~24), 분(0~59) 입력: ");
    scanf("%d %d", &H, &M);


    if ((H >= 0 && H <= 12) || (H == 24 && M == 0)) {
        if ((H + M) % 3 == 0) {
            printf("특이한 타임머신으로 돌아갈 수 있습니다.\n");
        } else {
            printf("돌아갈 수 없는 시간입니다.\n");
        }
    } else if (H > 12 && H <= 24) {
        if ((H + M) % 7 == 0) {
            printf("특이한 타임머신으로 돌아갈 수 있습니다.\n");
        } else {
            printf("돌아갈 수 없는 시간입니다.\n");
        }
    } else {
        printf("시간을 올바르게 입력하세요.\n");
    }

    return 0;
}