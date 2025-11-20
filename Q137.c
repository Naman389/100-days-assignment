//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int choice;
    enum Role r;

    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    
    printf("Enter choice: ");
    scanf("%d", &choice);

    r = choice;  

    switch (r){
        case 1:
            printf("Welcome Admin!");
            break;

        case 2:
            printf("Welcome User!");
            break;

        case 3:
            printf("Welcome Guest!");
            break;

    }
    return 0;
}

