//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

   int k=strlen(str);
    while (1) {
        if (str[i] != ' ' && i<=k-2) {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            if (strlen(word) > maxLength) {
                maxLength = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;
        i++;
    }

     printf("The longest word is: %s\n", longest);

    return 0;
}
