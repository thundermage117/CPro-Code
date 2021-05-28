#include<stdio.h>
#define arr_max 1000


int main()
{
    int n,a[arr_max],b[arr_max],t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {   t= a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    int c=0, d=n-1;
    for (int i=0;i<n;i++) 
    {
        if ((i+1)%2==0)
        {   
            b[i] = a[d];
            d--;
        }
        else
        {    
            b[i] = a[c];
            c++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ",b[i]);
    return 0;
}