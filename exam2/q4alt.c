#include<stdio.h>
#include<string.h>
char X[1000],Y[1000];

int main()
{
    int n,m,i;
    scanf("%d",&n);
        scanf("%s",&X[0]);
    scanf("%d",&m);
        scanf("%s",&Y[0]);
    char T[1000],t;
    if(m>n)
    {
        strcpy(T,X);
        strcpy(X,Y);
        strcpy(Y,T);
        t=n;n=m;m=t;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            if(strcmp(X,Y)==0)
    }
    return 0;
}