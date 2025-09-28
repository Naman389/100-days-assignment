//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {  
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;

}
