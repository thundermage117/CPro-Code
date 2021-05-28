#include<stdio.h>
#define arr_max 7

int detpart2(int arr[arr_max][arr_max], int n)
{   
    if (n==2)
        return ((arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]));
    else
    {
        int det=0;
        int b[arr_max][arr_max]={0},r=1,c=1,s=1;
        for(int k=0;k<n;k++)
        {   r=1;
            for(int i=0;i<n-1;i++)
            {
                c=0;
                for(int j=0;j<n-1;j++)
                {
                    if(c==k)
                        c++;
                    b[i][j]=arr[r][c];
                    c++;
                    if(c>=n)
                        c=0;
                }
                r++;
                if(r==n)
                    r=0;
            }
            det+=s*arr[0][k]*detpart2(b,n-1);
            s*=-1;
        }
        return det;
    }
    
}

int main()
{
    int n, a[arr_max][arr_max]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int ans=detpart2(a,n);
    printf("%d",ans);
    return 0;
}