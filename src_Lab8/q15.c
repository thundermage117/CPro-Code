#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{   
    char word[100][100]={0};
    int i,j=0;
    for(i=0;i<100;i++)
    {
        
        for(j=0;j<100;j++)
        {
            word[i][j]=getchar();
            if(word[i][j]==' ')
                break;
            if(word[i][j]=='\n')
                goto L;//sorry bout this, how bad can it be
        }

    }
    int code;
    L:
    scanf("%d",&code);
    char ch;
    j=i;
    for(i=0;i<=j;i++)
    {
        for(j=0;j<strlen(word[i]);j++)
        {
            ch=word[i][j];
            //putchar(word[i][j]);
            if(isupper(ch))
            {    ch+=code;
                if(isupper(ch)==0)
                    ch-=26;
            }
            if(islower(ch))
            {    ch+=code;
                if(islower(ch)==0)
                    ch-=26;
            }
            printf("%c",ch);
        }
    //printf(" ");
    }
    
}