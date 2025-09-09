//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    long long binary, result = 0;
    int digit;
    long long place = 1;

    printf("Enter number: ");
    scanf("%lld", &binary);
    while (binary > 0) {
        digit = binary % 10;

        if (digit == 0) {
            result = result + 1 * place;
        } else if (digit == 1) {
            result = result + 0 * place; 
        } 
        binary = binary / 10;
        place = place * 10;
    }

    printf("1's complement is: %lld\n", result);
    return 0;
}
