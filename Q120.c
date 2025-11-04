//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    int capital= 1;
    for (i = 0; str[i] != '\0'; i++) {
    if (capital==1 && (str[i] >= 'a' && str[i] <= 'z')) {
            str[i] = str[i] -32;
            capital = 0;
        }

        if (str[i] == ' '){
            capital = 1;
        }
    }

    printf("Sentence Case: %s", str);
    return 0;
}
