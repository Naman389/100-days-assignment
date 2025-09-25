//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
     printf("Enter number of columns:");
     scanf("%d",&n);
    

    printf("Enter the elements matrix:\n");
    int matrix[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}