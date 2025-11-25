//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }


    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Marks : %.2f", s[i].marks);
    }

    return 0;
}
