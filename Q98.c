//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int len, i, lastSpace = -1;

    printf("Enter  full name: ");
    fgets(name, 50, stdin); 

    len = strlen(name)-1;


    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Result: ");

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }

    if (lastSpace != -1)
        printf(" %s", &name[lastSpace + 1]);

    return 0;
}
