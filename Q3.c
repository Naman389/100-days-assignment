#include <stdio.h>

int main() {
    int length,breadth,area,perimeter;
    printf("Enter first number:");
    scanf("%d", &length);
    printf("Enter second number:");
    scanf("%d", &breadth);
    area=length*breadth;
    perimeter= 2*(length+breadth);
    printf("area is:%d\n",area);
    printf("perimeter is:%d\n",perimeter);
    return 0;
}