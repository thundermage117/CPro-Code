#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i+=2)
        printf("%d\n",i*i);
    return 0;
}