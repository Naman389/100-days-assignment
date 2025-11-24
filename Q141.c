//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include<stdio.h>
struct Student{
    char name[25];
    int rollno;
    float marks;
};

int main(){
    struct Student s;
    printf("Enter name:");
    scanf("%s",&s.name);

    printf("Enter Rollno.:");
    scanf("%d",&s.rollno);
     
    printf("Enter marks:");
    scanf("%f",&s.marks);

    printf("Name:%s | Roll:%d | Marks:%.2f",s.name,s.rollno,s.marks);
   
    return 0;
}