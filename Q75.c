//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include<stdio.h>
int main(){
    int i,j,p,q;
    printf("Enter number of rows:");
    scanf("%d",&p);
    printf("Enter number of columns:");
    scanf("%d",&q);

    int a[p][q];
    printf("Enter elements of 1st matrix:");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    int b[p][q];
    printf("Enter elements of 2nd matrix:");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int sum[p][q];
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
}
printf("sum:\n");
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
return 0;

}