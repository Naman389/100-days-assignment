//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include<stdio.h>
int main(){
    int num,i,t;
    float sum=0.00;
    printf("Enter number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        t=2*i;
        sum=sum+(float)(t)/(2*t-1);
    }
    printf("sum is:%.2f",sum);
    return 0;
}