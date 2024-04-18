#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rounds, user_choice, computer_choice, user_wins = 0;
    printf("몇 라운드를 진행하시겠습니까? ");
    scanf("%d", &rounds);

    srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

    // 라운드 수 만큼 가위바위보 진행
    for (int i = 0; i < rounds; i++) {
        printf("가위(0), 바위(1), 보(2) 중 하나를 선택해주세요: ");
        scanf("%d", &user_choice);

        computer_choice = rand() % 3; // 컴퓨터의 선택을 랜덤으로 생성

        // 사용자와 컴퓨터의 선택을 비교
        if ((user_choice == 0 && computer_choice == 2) ||
            (user_choice == 1 && computer_choice == 0) ||
            (user_choice == 2 && computer_choice == 1)) {
            // 사용자가 이긴 경우
            printf("당신이 이겼습니다!\n");
            user_wins++;
        }
        else if (user_choice == computer_choice) {
            // 비긴 경우
            printf("비겼습니다.\n");
        }
        else {
            // 컴퓨터가 이긴 경우
            printf("컴퓨터가 이겼습니다.\n");
        }
    }

    // 최종 승리 횟수 출력
    printf("게임 종료. 당신은 %d 라운드 중 %d번 이겼습니다.\n", rounds, user_wins);
    return 0;
}
