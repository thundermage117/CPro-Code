#include<stdio.h>
#include<string.h>

int main()
{
    char word[100][100],end;
    int i,j;
    for(i=0;i<100;i++)
    {
        scanf("%s",word[i]);
        if(word[i][0]=='.'||word[i][0]=='!'||word[i][0]=='?')
        {    end=word[i][0];break;}
    }
    i-=1;
    for(;i>=0;i--){
        for(j=0;j<strlen(word[i]);j++)
            putchar(word[i][j]);
    printf(" ");
    }
    printf("%c",end);
}