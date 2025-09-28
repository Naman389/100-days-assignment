//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int diag[20], k = 0;  
    int arr[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                diag[k++] = arr[i][j];  
            }
        }
    }


    int flag = 1;
    for (i = 0; i < k; i++) {
        for (j = i + 1; j < k; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag==1) {
        printf("Diagonal elements are distinct.\n");
    }else{
         printf("Diagonal elements are NOT distinct.\n");
    }
    return 0;
}