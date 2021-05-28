#include<stdio.h>
#define arr_max 100

int rowsum(int a[][arr_max],int m,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[m][i];
    return sum;
}

int main()
{
    int m,n,a[arr_max][arr_max]={0};
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int b[1][arr_max]={0};
    int max=0,row=0;
    for(int i=0;i<m;i++)
    {   max=0;row=0;
        for(int j=i;j<m-1;j++)
        {
            if(rowsum(a,j,n)>max)
            {
                max=rowsum(a,j,n);
                row=j;
            }
        }
        for(int k=0;k<n;k++)
        {
            b[row][k]=a[row][k];
            a[row][k]=a[i][k];
            a[i][k]=b[row][k];
        }
    }
    for(int i=0;i<m;i++)
    {    for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    

    


    return 0;
}