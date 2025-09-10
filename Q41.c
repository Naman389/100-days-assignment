// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int num, remainder, ldigit, fdigit, mdigit, original, swappednum;
    int pow = 1;
    printf("Enter number:");
    scanf("%d", &num);
    original = num;
    ldigit = original % 10;
    while (num >= 10)
    {
        num = num / 10;
        pow = pow * 10;
    }
    fdigit = num;
    mdigit = original % pow;
    mdigit = mdigit / 10;

    swappednum = ldigit * pow + mdigit * 10 + fdigit;
    printf("Swapped number is:%d", swappednum);
    return 0;
}