//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice, a, b;
    enum Menu oper;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    
    printf("Enter choice: ");
    scanf("%d", &choice);

    oper = choice; 

    switch (oper){
        case 1:
            printf("Result = %d", a + b);
            break;
        case 2:
            printf("Result = %d", a - b);
            break;
        case 3:
            printf("Result = %d", a * b);
            break;
        }
       
        return 0;
    }

