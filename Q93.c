//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int count1[26] = {0}, count2[26] = {0}; 
    int i;

    printf("Enter first string: ");
    fgets(str1, 50, stdin);
    printf("Enter second string: ");
    fgets(str2,50, stdin);

   int j= strlen(str1);

    for (i = 0; i<=j-2; i++) {
        char ch = str1[i];

      
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
            count1[ch - 'a']++;
    }

     int k=strlen(str2);
    for (i = 0; i<=k-2; i++) {
        char ch = str2[i];

      
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
            count2[ch - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are ANAGRAMS of each other.\n");
    return 0;
}
