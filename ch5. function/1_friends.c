#include <stdio.h>

int give_friend(int length, int m) {
    printf("먹은 사람 : %d번째 친구, 먹은 후 남은 길이 : %d\n", length % m, --length);
    return length;
}
int eat(int length, int m) {
    printf("먹은 사람 : 김연세, 먹은 후 남은 길이 : %d\n", length / m);
    return length / m;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    while (n != 0) {
        if (n % m) n = give_friend(n, m);
        else n = eat(n, m);
    }
    return 0;
}