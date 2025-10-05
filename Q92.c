//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int freq[26] = {0};
    int i, index, found = 0;

    printf("Enter a string: ");
    fgets(str, 50, stdin); 

    int j=strlen(str)-1;
    for (i = 0; i<j; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { 
            index = str[i] - 'a';
            freq[index]++;

            if (freq[index] == 2) { 
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
