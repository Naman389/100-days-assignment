//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int i,j,m,n,a;
    printf("Enter number of rows:");
    scanf("%d",&m);
     printf("Enter number of columns:");
     scanf("%d",&n);
    

    printf("Enter the elements matrix:\n");
    int matrix[m][n],rowsum[m];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
   
    for(i=0;i<m;i++){
         rowsum[i]=0;
        for(j=0;j<n;j++){
            rowsum[i]= rowsum[i]+matrix[i][j];
        }
    }
    for(i=0;i<m;i++){
        printf(" %d\t",rowsum[i]);
    }
    return 0;
}