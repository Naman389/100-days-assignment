//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], temp[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        printf("Rotation.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}
