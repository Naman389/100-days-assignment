//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
#include<string.h>

int main() {
    char str[50];
    int i;

    printf("Enter a string: ");
    fgets(str,50, stdin);  

    int j=strlen(str)-1;
    for (i = 0;i<j; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
