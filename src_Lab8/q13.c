#include<stdio.h>
#include<string.h>

int main()
{
    char first[20],last[20];
    scanf("%s",first);
    scanf("%s",last);
    for(int i=0;i<strlen(last);i++)
        putchar(last[i]);
    printf(", %c.",first[0]);
    return 0;
}