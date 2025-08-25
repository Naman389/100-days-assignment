#include <stdio.h>
#include <math.h>

int main() {
    float principal,rate,time,simpleinterest,compoundinterest;
    printf("Enter Principal:");
    scanf("%f", &principal);
    printf("Enter Rate of interest:");
    scanf("%f", &rate);
    printf("Enter Time Period:");
    scanf("%f", &time);


    simpleinterest=(principal*rate*time)/100;
    compoundinterest=principal*pow((1+rate/100),time)-principal;

     printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);
    return 0;
}