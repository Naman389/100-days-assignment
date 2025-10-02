//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j, temp = 1;

    printf("Enter a string: ");
    scanf("%s",str);


    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            temp = 0;
            break;
        }
        i++;
        j--;
    }

    if (temp == 1){
        printf("The string is a palindrome.\n");
    }else{
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
