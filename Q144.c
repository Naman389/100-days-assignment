//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include<stdio.h>

struct Student{
    int rollno;
    float marks;
};

void display(struct Student s){
    printf("Roll Number:%d\n",s.rollno);
    printf("Marks:%.2f",s.marks);
}

int main(){
    struct Student s;

    s.rollno=12;
    s.marks=20;

    display(s);

    return 0;
}