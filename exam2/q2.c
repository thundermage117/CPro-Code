#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch[101];  
    fgets(ch,101,stdin);
    int i=1,j;
    int a[10]={0};
    int len=0;
    while(ch[i]!='\n')
    {   
        len=0;
        while(ch[i]!=' '&&ch[i]!='\n')
        {
            len++;
            i++;
            
        }
        if(len<10)
            a[len]++;
        i++;
    }
    for(int i=2;i<=8;i++)
        printf("%d\n",a[i]);


    return 0;
}