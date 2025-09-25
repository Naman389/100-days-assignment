//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
     printf("Enter number of columns:");
     scanf("%d",&n);
    

    printf("Enter the elements matrix:\n");
    int matrix[m][n],sum=0;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+matrix[i][j];
        }
    }
    printf("Sum is:%d",sum);
    return 0;
}

