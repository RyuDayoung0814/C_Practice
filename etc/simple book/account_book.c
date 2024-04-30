#include <stdio.h>
#include <stdlib.h>

#define MAX_ENTRIES 100

typedef struct {
    char description[100];
    float amount;
    int type; // 0 for expense, 1 for income
} Entry;

Entry entries[MAX_ENTRIES];
int count = 0;

void addEntry(int type) {
    if (count >= MAX_ENTRIES) {
        printf("가계부 항목이 최대치입니다.\n");
        return;
    }
    printf("설명을 입력하세요: ");
    scanf(" %[^\n]", entries[count].description); // 공백 포함 입력 받기
    printf("금액을 입력하세요: ");
    scanf("%f", &entries[count].amount);
    entries[count].type = type;
    count++;
}

void showBalance() {
    float balance = 0;
    printf("---- 가계부 현황 ----\n");
    for (int i = 0; i < count; i++) {
        printf("%s: %s %.2f\n", entries[i].type == 1 ? "수입" : "지출", entries[i].description, entries[i].amount);
        if (entries[i].type == 1) {
            balance += entries[i].amount;
        } else {
            balance -= entries[i].amount;
        }
    }
    printf("현재 잔액: %.2f\n", balance);
}

int main() {
    int choice;

    while (1) {
        printf("1: 수입 추가\n2: 지출 추가\n3: 잔액 확인\n0: 종료\n선택: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addEntry(1);
                break;
            case 2:
                addEntry(0);
                break;
            case 3:
                showBalance();
                break;
            case 0:
                printf("프로그램을 종료합니다.\n");
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 입력해주세요.\n");
                break;
        }
    }

    return 0;
}
