//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};


int main() {
    int n;
    printf("Enter number of student:");
    scanf("%d",&n);

    struct Student s[n];
    int i;

    for (i = 0; i < n; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }


    int maxnum = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxnum].marks) {
            maxnum = i;
        }
    }


   
    printf("Name: %s  (Marks:%.2f)", s[maxnum].name,s[maxnum].marks);
    

    return 0;
}
