//Q125: Open an existing file in append mode and allow the user to enter a new line of text.
// Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    char text[200];
    FILE *fp;
    fp=fopen("sample2.txt","a");
    if (fp == NULL) {
        printf("File not found.");
    }else{
        printf("Enter text:");
        fgets(text,200,stdin);
        fputs(text,fp);

        fclose(fp);
    }
    printf("File updated successfully.");
    return 0;
}


