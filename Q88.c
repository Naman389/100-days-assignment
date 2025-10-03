//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,j;

    printf("Enter a string:");
    fgets(str,50,stdin);

    i=0;
    j=strlen(str)-1;
    for(i=0;i<j;i++){
        if(str[i]==' '){
            str[i]='-';
        }
    }
    printf("New string is:%s",str);
    return 0; 

}