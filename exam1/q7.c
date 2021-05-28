#include<stdio.h>
#define arr_max 100

int main()
{
    int m,n,n[arr_max][arr_max]={0};
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&n[i][j]);

            for (int i = 0; i < n.GetLength(0) - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (n[i, 0] > n[j, 0]) // sort by ascending by first index of each row
            {
                for (int k = 0; k < n; k++)
                {
                    var temp = n[i, k];
                    n[i, k] = n[j, k];
                    n[j, k] = temp;
                }
            }
        }
