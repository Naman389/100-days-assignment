// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include<stdio.h>
#include<string.h>

enum Status { 
    SUCCESS,
    FAILURE, 
    TIMEOUT 
};

int main() {
    char s[20];
    
    printf("Enter status:");
    scanf("%s", &s);
       
    enum Status st;
    if (s[0]=='S' ){
        st = SUCCESS;
    }else if (s[0]=='F'){
        st = FAILURE;
    }else{
        st = TIMEOUT;
    }

    switch (st){
        case 0:
            printf("Operation successful");
            break;
        case 1:
            printf("Operation failed");
            break;
        case 2:
            printf("Operation timed out");
            break;
    }
    return 0;
}


