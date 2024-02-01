#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int menu;
    double r, w, h;

    printf("[Menu]\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("- Input Menu: ");

    scanf("%d", &menu);
    
    switch (menu)
    {
    case 1:
        printf("[Cicle] Input Radius: ");
        scanf("%lf", &r);

        printf("- Result: %.2lf\n", r*r*3.14);
        break;
    case 2:
        printf("[Rectangle] Input Width, Height: ");
        scanf("%lf %lf", &w, &h);

        printf("- Result: %.2lf\n", w*h);
        break;
    case 3:
        printf("[Triangle] Input Width, Height: ");
        scanf("%lf %lf", &w, &h);

        printf("- Result: %.2lf\n", w*h/2);
        break;
    default:
        printf("[Error] Wrong Menu\n");
        break;
    }

    return 0;
}