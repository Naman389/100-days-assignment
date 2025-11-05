//Q124: Take two filenames from the user – a source file and a destination file.
// Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char source[100], destination[100];
    FILE *fs, *fd;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", source);

    printf("Enter destination filename: ");
    scanf("%s", destination);

    fs = fopen(source, "r");
    if (fs == NULL) {
        printf(" File not found.\n");
    }

    fd = fopen(destination, "w");
    if (fd == NULL) {
        printf("Cannot open destination file.");
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    printf("File copied successfully.");

    fclose(fs);
    fclose(fd);


    return 0;
}