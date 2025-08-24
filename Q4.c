#include <stdio.h>
#define PI 3.14159

int main() {
    int radius,area,circumference;
    printf("Enter first number:");
    scanf("%d", &radius);
    area=PI*radius*radius;
    circumference=2*PI*radius;
    printf("area is:%d\n",area);
    printf("circumference is:%d\n",circumference);
    return 0;
}