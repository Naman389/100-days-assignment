//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    char s[10];
    enum TrafficLight Signal;

    printf("Enter signal:");
    scanf("%s", s);

    if (s[0] == 'R')
        Signal = RED;
    else if (s[0] == 'Y')
        Signal = YELLOW;
    else
        Signal = GREEN;

    switch (Signal) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
