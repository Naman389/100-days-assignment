// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
    int num, remainder, sum = 0, fact, temp;
    printf("Enter number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {int fact=1;
        remainder = num % 10;
        for (int i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("Number is strong.");
    }
    else
    {
       printf("Number is not strong");
    }
    return 0;
}