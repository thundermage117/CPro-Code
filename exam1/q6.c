#include<stdio.h>
#define arr_max 100

int main()
{
    int m,n,a[arr_max][arr_max]={0};
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int b[1][arr_max]={0},row=0;
    for(int i=0;i<m;i++)
    {   
            row=i;
        
        for(int k=i;k<m-1;k++)
            {   
                for(int l=0;l<n;l++)
                {
                    if(a[k][l]<b[0][l])
                        row=k;
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

