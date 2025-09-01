//Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main (){
    int dayslate;
    int fine=0;
    printf("Enter number of days:");
    scanf("%d",&dayslate);

    if(dayslate<=0){
        printf("No fine.\n");
    }else if(dayslate<=5){
        fine=dayslate*2;
        printf("Fine=%d",fine);
    }else if (dayslate<=10){
        fine=dayslate*4;
        printf("Fine=%d",fine);
    }else if(dayslate<=30){
        fine=dayslate*6;
        printf("Fine=%d",fine);
    }else{
        printf("Membership cancelled.\n");
    }return 0;

}
