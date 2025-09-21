//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; 
    int digit, i, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);


    while (num > 0) {
        digit = num % 10;    
        freq[digit]++;   
        num /= 10;    
    }

    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times.\n", maxDigit);

    return 0;
}