//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("File not found.");
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("cannot open this file.");
    }

    while ((ch = fgetc(fin)) != EOF) {
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
