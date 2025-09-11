//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main(){
    int num;
    float sum=1.0;
    printf("Enter number:");
    scanf("%d",&num);
    
    for(int i=2;i<=num;i++){
        sum=sum+(float)(2*i-1)/(2*i);
    }printf("Sum is:%.1f",sum);
    return 0;
}