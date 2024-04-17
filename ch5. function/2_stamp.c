#include <stdio.h>

void stamp(int curr_island, int n) {
    if (curr_island > n) return;
    printf("벽력%d섬 방문!\n", curr_island);
    stamp(curr_island * 2, n);
    stamp(curr_island * 2 + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    stamp(1, n);
    return 0;
}