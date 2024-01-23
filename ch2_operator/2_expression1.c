#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x1, x2, ans;

	printf("x1, x2: ");
	scanf("%d %d", &x1, &x2);
	ans = x1 * x1 + 3 * x1 + 5 * x2 - x1 * x2;

	printf("Answer is %d \n", ans);

	return 0;
}