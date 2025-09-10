// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main()
{
    int num, sum,i = 0; 
    printf("Enter number:");
    scanf("%d", &num);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;  
        }
    }
    if(num==sum){
        printf("Number is perfect.");
    }else{
        printf("Number is not perfect.");
    }
    return 0;

}
