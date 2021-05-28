#include<stdio.h>
#include<string.h>

int main()
{
    char line[1000];
    fgets(line,1000,stdin);
    int len=strlen(line),i;
    for(i=0;i<len;i++)
    {   if(line[i]>=97&&line[i]<97+26)
            line[i]-=32;
        switch (line[i])
        {
        case 'A':
            line[i]='4';
            break;
        case 'B':
            line[i]='8';
            break;
        case 'E':
            line[i]='3';
            break;
        case 'I':
            line[i]='1';
            break;
        case 'O':
            line[i]='0';
            break;
        case 'S':
            line[i]='5';
            break;
        default:
            break;
        }
    }
    //char app[11],final[200]={0};
    //app[10]='\0';
    for(i=0;i<len-1;i++)
        printf("%c",line[i]);
    for(i=0;i<10;i++)
        printf("%c",'!');
    return 0;
}