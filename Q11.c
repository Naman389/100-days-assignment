#include <stdio.h>

int main() {
    int n;
    // Ask the user for input
    printf("enter number:");
    scanf("%d",&n);

    // Check if the number is even or odd
    if(n%2==0){
       printf("%d is even.\n",n);
    } else{
        printf("%d is odd.\n",n);
    }return 0;
    }




    