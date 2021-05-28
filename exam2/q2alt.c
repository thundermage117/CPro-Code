#include<stdio.h>
#include<string.h>


int main()
{
    char str[15];
    int i=0;
    scanf("%[^\n]",&str[0]);
    int a[10]={0},len=0;
    for(int i=0;i<=strlen(str);i++)
    {
        
        if(str[i]==' '||str[i]=='\0')
        {   
            if(len<10)
                a[len]++;
            len=0;
            continue;
        }
        len++;
    }
    for(int i=2;i<=8;i++)
        printf("%d\n",a[i]);

    

    return 0;
}