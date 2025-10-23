//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, count, max = 0, found;

    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for (i = 0; i < len; i++) {
        count = 0;
        for (j = i; j < len; j++) {
            found = 0;
            for (k = i; k < j; k++) {
                if (s[j] == s[k]) {
                    found = 1;
                    break;
                }
            }
            if (found)
                break;
            count++;
        }
        if (count > max)
            max = count;
    }

    printf("Length of longest substring without repeating characters: %d\n", max);

    return 0;
}

