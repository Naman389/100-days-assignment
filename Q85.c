//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    int i, j;
    char temp;

    i = 0;
    j = strlen(str) - 1;  

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }


    printf("Reversed string: %s\n", str);

    return 0;
}