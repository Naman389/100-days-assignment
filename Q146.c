//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    struct Date joiningdate; 
};

int main() {
    struct Employee E;

    printf("Enter Employee Name: ");
    scanf("%s", E.name);


    printf("Enter Employee ID: ");
    scanf("%d", &E.id);

    

    printf("Enter Joining Date: ");
    scanf("%d", &E.joiningdate.day);
    scanf("%d", &E.joiningdate.month);
    scanf("%d",&E.joiningdate.year);

    printf("Name: %s | ", E.name);
    printf("ID: %d | ", E.id);
    printf("Joining Date: %d/",E.joiningdate.day);
    printf("%d/",E.joiningdate.month);
    printf("%d",E.joiningdate.year);

    return 0;
}
