//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main(){
    int i,j,m,n,determinant=1;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);

    int arr[m][n];
    printf("Enter the elements of matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) {
                determinant = 0;
                break;
            }
        }
        if (determinant == 0)
            break;
    }

    if (determinant == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
