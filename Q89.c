//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str,50, stdin); 

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    int j=strlen(str)-1;
    for (i = 0;i<j; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
