//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main(){
    int num1,num2,max,i,n,lcm;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    if(num1>num2){
        max=num1;
    }else{
        max=num2;
    }
    for(i=max;;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    } 
    printf("LCM of %d and %d is:%d",num1,num2,lcm);
    return 0;
}