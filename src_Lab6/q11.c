#include <stdio.h>

int fact(int x)
{
    if(x==0||x==1)
        return 1;
    else 
        return x*fact(x-1);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    float e=1.000f;
    for(i=1;i<=n;i++)
        e+=1.0f/fact(i);
    printf("%f",e);
    return 0;
}