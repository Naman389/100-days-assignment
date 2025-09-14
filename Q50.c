//Q50: Write a program to print the following pattern:
// *****
//   ****
//     ***
//       **
//         *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include<stdio.h>
int main(){
    int i,j,space;
    for(i=0;i<5;i++){
        for(space=0;space<i;space++){
            printf("  ");
        }
        for(j=i;j<5;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
