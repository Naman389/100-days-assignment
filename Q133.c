//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>
#include<string.h>

enum Month {
    JANUARY , FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main(){
    char s[10];
    
    printf("Enter Month:");
    scanf("%s",&s);
    
    enum Month mon;
    if(strcmp(s,"JAN")==0){
        mon=JANUARY;
    }
    else if(strcmp(s,"FEB")==0){
        mon=FEBRUARY;
    }
    else if(strcmp(s,"MAR")==0){
        mon=MARCH;
    }
    else if(strcmp(s,"APR")==0){
        mon=APRIL;
    }
    else if(strcmp(s,"MAY")==0){
        mon=MAY;
    }
    else if(strcmp(s,"JUN")==0){
        mon=JUNE;
    }
    else if(strcmp(s,"JUL")==0){
        mon=JULY;
    }
    else if(strcmp(s,"AUG")==0){
        mon=AUGUST;
    }
    else if(strcmp(s,"SEP")==0){
        mon=SEPTEMBER;
    }
    else if(strcmp(s,"OCT")==0){
        mon=OCTOBER;
    }
    else if(strcmp(s,"NOV")==0){
        mon=NOVEMBER;
    }
    else if(strcmp(s,"DEC")==0){
        mon=DECEMBER;
    }
    else {
        printf("Invalid Input");
        return 0;
    }
    
    switch (mon){
    case 0:
        printf("31 days");
        break;
    case 1:
        printf("28 or 29 days");
        break;
    case 2:
        printf("31 days");
        break;
    case 3:
        printf("30 days");
        break;
    case 4:
        printf("31 days");
        break;
    case 5:
        printf("30 days");
        break;
    case 6:
        printf("31 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("30 days");
        break;
    case 9:
        printf("31 days");
        break;
    case 10:
        printf("30 days");
        break;
    case 11:
        printf("31 days");
        break;
    }
    return 0;
}
