#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	double width, height, ans;

	printf("width, height: ");
	scanf("%lf %lf", &width, &height);

	ans = sqrt((width * width) + (height * height));

	printf("Answer is %.2lf \n", ans);

	return 0;
}