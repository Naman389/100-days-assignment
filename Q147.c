//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    int salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;


    fp = fopen("employee.txt", "wb"); 
    if (fp == NULL) {
        printf("Error in  opening file!");
        return 0;
    }
 
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);
    
    printf("Enter Salary: ");
    scanf("%d", &e1.salary);

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

     fp = fopen("employee.txt", "rb");
    if (fp == NULL) {
        printf("File does not exist!");
        return 0;
    }
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

 
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %d", e2.salary);

    return 0;
}
