//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main(){
    int i,j,m,n,a;
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
   
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    int transmatrix[i][j];

        for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            transmatrix[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t",transmatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}