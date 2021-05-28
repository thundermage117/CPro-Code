#include<stdio.h>

int calc(int a[],int c[],int m,int k)
{
    int s=c[k+1];
    for(int i=1;i<=k;i++)
        s+=c[i]*a[m-i];
    return s;
}   


int main()
{
    int k,m;
    scanf("%d %d",&k,&m);
    int a[10000]={0},c[10000]={0};
    for(int i=1;i<=k;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=k+1;i++)
        scanf("%d",&c[i]);
    for(int i=1;i<=k;i++)
        printf("%d ",a[i]);
    for(int i=k+1;i<=m;i++)
        a[i]=calc(a,c,i,k);
    for(int i=k+1;i<=m;i++)
        printf("%d ",a[i]);
    return 0;
}