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
    int i;
    double e=1.000f,n;
    scanf("%lf",&n);
    for(i=1;1.0f/fact(i)>n;i++)
        e+=1.0f/fact(i);
    printf("%.9f",e);
    return 0;
}