//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main(){
    int n,i,largest,second;
    printf("Enter number of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
     largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    second = -214748;
    for (i = 0; i < n; i++) {
        if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
     if (second == -214748) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element = %d\n", second);
    }

    return 0;
}