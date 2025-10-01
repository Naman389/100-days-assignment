//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

int main() {
    char str[50];
    int vowels=0,consonants=0;

    printf("Enter a string: ");
    fgets(str, 50, stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowels++;
         } else{
                consonants++;
            }
        }
    printf("vowels=%d\n",vowels);
    printf("consonants=%d",consonants);

    return 0;
}
