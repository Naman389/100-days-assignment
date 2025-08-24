#include <stdio.h>

int main() {
    int n,sum;
    printf("enter number of natural numbers:");
    scanf("%d",&n);

    sum=(n*(n+1))/2;
    printf("sum:%d",sum);
    return 0;
    }