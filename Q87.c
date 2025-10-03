//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int spaces=0,digits=0,specialcharacters=0;

    printf("Enter a string:");
    fgets(str,50,stdin);

    int i=0;    
    int j=strlen(str)-1;

    for(i=0;i<j;i++){
        if(str[i]>='0'&&str[i]<='9'){
            digits++;
        }
        else if(str[i]==' '){
            spaces++;
        }
         else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z'))
                  {
        }
        else{
            specialcharacters++;
        }
    }
    printf("Digits=%d\n",digits);
    printf("Spaces=%d\n",spaces);
    printf("Special characters=%d",specialcharacters);
    return 0;
}
