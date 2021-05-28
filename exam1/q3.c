#include<stdio.h>
#define arr_max 2

int main()
{
    int n,a[arr_max][arr_max]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                scanf("%d",&a[i][j]);
        }}

    int t=0,test=1,b,c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t=a[i][j];
            b=i,c=j;
            while(b<n&&c<n)
            {
                if(t!=a[b][c])
                {    test=0;
                    printf("no");
                    goto L;
                }
             b++;c++;
            }
        }
    }
    printf("yes");
    L:



    return 0;
}