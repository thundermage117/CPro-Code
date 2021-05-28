#include<stdio.h>

int prime(int n)
{
    if(n==0||n==1)
        return 0;
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
            return 0;
    }
    return 1;
}

int po(int a,int b)
{
    int s=1;
    for(int i=0;i<b;i++)
        s*=a;
    return s;
}


int main()
{
    int t=0;
    scanf("%d",&t);
    do
    {
    
    int n,a[15];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int size=po(2,n);
    int aa[10000]={0};
    for (size_t i = 0; (i >> n) == 0; i++) 
    {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1)
                    sum += a[j];
            }
            aa[i] = sum;
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(prime(aa[i])==1)
            count++;
    }
    printf("%d\n",count);
    t--;
    } while (t>0);

    return 0;
}