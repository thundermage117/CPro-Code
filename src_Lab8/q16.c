#include<stdio.h>
#include<ctype.h>

#define max_len 100000

int main()
{
    char ch;
    int letter[26]={0};
    while ((ch = getchar()) != '\n') 
    {
        if (isalpha(ch))
            letter[tolower(ch) - 97]++;
    }
    while ((ch = getchar()) != '\n') 
    {
        if (isalpha(ch))
            letter[tolower(ch) - 97]--;
    }
    int t=1;
    for(int i=0;i<26;i++)
        if(letter[i]>0)
        {    t=0;break;}
    printf("%d",t);
    return 0;
}