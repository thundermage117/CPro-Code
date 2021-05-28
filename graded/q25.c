#include <stdio.h>


int good(char * abc, int len)
{   int t=1;
    for(int i=0;i<len;i++)
        if(abc[i]!=abc[len-i-1])
        {
            t=0;
            break;
        }
    if((len%2==0)&&t)
        return 1;
    return 0;

}

int func(char *abc, int len)
{
    if(good(abc,len))
        return 1;
    int t=0;
    for(int i=2;i<len;i+=2)
    {   
        t=1;
        t=func(abc,i)*func(abc+i,len-i);
        if(t==1)
            return 1;
    }
    return 0;
}


int main()
{
    char a[11];
    scanf("%s",a);
    int t=0;
    for(t=0;a[t]!='\0';t++);
    if(t%2==1)
        goto L;
    if(func(a,t))
        printf("YES");
    
    else
    L:    printf("NO");
    return 0;
}