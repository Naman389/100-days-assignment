//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include<stdio.h>
enum Colors{
    RED,
    YELLOW,
    GREEN
};

int main(){
    enum Colors color;

for(color=RED;color<=GREEN;color++){
    switch (color){
        case 0:
            printf("RED=%d\n",color);
            break;

        case 1:
            printf("YELLOW=%d\n",color);
            break;

        case 2:
            printf("GREEN=%d",color);
            break;
        }
    }
    return 0;
}