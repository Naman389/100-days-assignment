// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end, len;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, 200, stdin);

    str[strcspn(str, "\n")] = '\0';
    len = strlen(str) ;
    start = 0;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i-1 ;
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}
