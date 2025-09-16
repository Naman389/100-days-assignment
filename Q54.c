//Q54: Write a program to print the following pattern:

// *

// ***

// *****
// *******
// ***

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int i, j;
    int n = 4;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
        if(i<=2){
            printf("\n");
        }
    }

    for (i = n - 2; i >= 1; i--) {
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
        if(i==2){
            printf("\n");
        }
    }

    return 0;
}