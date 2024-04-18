#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the x, y: ");
    scanf("%d %d", &x, &y);

    if(x > 0){
        if(y > 0)
            printf("The coordinate (%d, %d) is in the first quadrant.\\n", x, y);
        else
            printf("The coordinate (%d, %d) is in the fourth quadrant.\\n", x, y);
    }
    else{
        if(y > 0)
            printf("The coordinate (%d, %d) is in the second quadrant.\\n", x, y);
        else
            printf("The coordinate (%d, %d) is in the third quadrant.\\n", x, y);
    }
    return 0;
}