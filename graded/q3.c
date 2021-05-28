#include<stdio.h>

int main()
{
    int n, a[1000]={0},i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    long long int sum=0,s=0,t=0;

    for(int j=2;j<n;j+=2)    
    {   s=0;t=0;

        for(i=0;i<j;i++)
            s+=a[i];
        t=s;
        for(i=j;i<n;i++)
        {
            s-=a[i-j];
            s+=a[i];
            t+=s;
        }

        sum+=t;
    }
    if(n%2==0)
    {for(i=0;i<n;i++)
        sum+=a[i];
    }
    printf("%lld",sum);

    return 0;
}