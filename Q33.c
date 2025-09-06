//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main (){
   int num,originalnumber,number,remainder=0,n=0;
   float result=0.0;
   printf("Enter number:");
   scanf("%d",&num);
   originalnumber=num;
   number=num;
   while(num>0){
      num=num/10;
      n++;
   }
   while(originalnumber>0){
      remainder=originalnumber%10;
      result=result+pow(remainder,n);
      originalnumber=originalnumber/10;
   }
   if(result==number){
    printf("Number is armstrong.");
   }else{
    printf("Number is not armstrong.");
   }
   return 0;
}