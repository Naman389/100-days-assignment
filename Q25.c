//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include<stdio.h>
int main(){
      int num1,num2;
      int operators;
      int result;
      printf("Enter first number:");
      scanf("%d",&num1);
      printf("Enter second number:");
      scanf("%d",&num2);
      printf("Enter operator:");
      scanf("%d",&operators);
      printf("1.sum 2.differnece 3.product 4.division 5.modulus\n");
      switch(operators){
        case 1:
        result=num1+num2;
        printf("sum is:%d\n",result);
        break;
        case 2:
        result=num1-num2;
        printf("difference is:%d\n",result);
        break;
        case 3:
        result=num1*num2;
        printf("product is:%d\n",result);
        break;
        case 4:
        result=num1/num2;
        printf("division is:%d\n",result);
        break;
        case 5:
        result=num1%num2;
        printf("modulus is:%d\n",result);
        break;
      }return 0;
}