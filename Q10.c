#include <stdio.h>

int main() {
    int totalseconds,hours,minutes,seconds;
    printf("Total time in seconds:");
    scanf("%d",&totalseconds);

    hours=totalseconds/3600;
    minutes=(totalseconds%3600)/60;
    seconds=totalseconds%60;

    printf("Time is %d:%d:%d",hours,minutes,seconds);
    return 0;
}