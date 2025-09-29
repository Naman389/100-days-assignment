// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int arr[m][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Diagonal Traversal:\n");

    for (int k = 0; k < m; k++)
    {
        int i = k, j = 0;
        while (i >= 0 && j < n)
        {
            printf("%d ", arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    for (int k = 1; k < n; k++)
    {
        int i = m - 1, j = k;
        while (i >= 0 && j < n)
        {
            printf("%d ", arr[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}