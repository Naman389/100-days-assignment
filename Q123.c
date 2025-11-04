//Q123: Read a text file and count the total number of characters, words, and lines. 
//A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char str[200];
    int characters = 0, words = 0, lines = 0;
    fp=fopen("sample.txt","r");
     if (fp == NULL) {
        printf("NO file found.\n");
    }else{
        while(fgets(str,200,fp)!=NULL){
            lines++;
            for(int i=0;str[i]!='\0';i++){
                characters++;
                
                if (str[i] != ' ' && str[i] != '\n' &&
                (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n'))  {
                words++;
            }
            }
        }
        fclose(fp);
    }
        printf("characters=%d\n",characters);
        printf("words=%d\n",words);
        printf("Lines=%d",lines);
        return 0;
    }
