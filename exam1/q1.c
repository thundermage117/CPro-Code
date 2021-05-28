#include <stdio.h>
#include <string.h>

int main()
{
    char ch;int a[200]={0};

    ch=getchar();
    while(ch!='\n')
    {
        a[(int)ch]++;
        ch=getchar();
    }
    int max=0,t=0;
    for(int i=0;i<200;i++)
    {   max=0;
        for(int j=0;j<200;j++)
        {
            if(a[j]>a[max])
                max=j;
        }
        t++;
        printf("%c ",max);
        if(t==3)
            break;
        a[max]=0;

    }



    return 0;
}