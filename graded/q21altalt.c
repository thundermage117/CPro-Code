#include<stdio.h>
#define arr_max 1000000


 

int main()
{
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[arr_max]={0};
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j+1]<a[j])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    t=(a[n-1]-a[0])/k;
    int b[arr_max]={0},temp=n-1,temp1=0;
    int top=a[n-1];
    for(int i=k-1;i>=0;i--)
    {  top=top-t;
        temp1=0;
        for(int j=temp;j>=0;j--)
        {
            if(a[j]>=top)
            {
                temp1++;
                temp--;
            }
            else 
                break;
        }
        b[i]=temp1;
    }
    for(int i=0;i<k;i++)
        printf("%d ",b[i]);
    return 0;
}