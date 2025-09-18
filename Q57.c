//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include<stdio.h>
int main(){
    int n,i,j,arr[20],sum=0;
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("sum is :%d",sum);
    return 0;
    
}