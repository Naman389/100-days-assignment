//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student *)malloc(1*sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter Name:");
    scanf("%s", ptr->name); 
    
    printf("Enter Roll Number:");
    scanf("%d", &ptr->roll);


    printf("Enter Marks:");
    scanf("%f", &ptr->marks);


    printf("Name: %s | ", ptr->name);
    printf("Roll Number: %d | ", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);

    return 0;
}
