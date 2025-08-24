#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter first number (a):");
    scanf("%d",&a);
    printf("Enter second number (b):");
    scanf("%d",&b);
    printf("before swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    c=a;
    a=b;
    b=c;
    printf("after swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
    }

