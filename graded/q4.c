#include <stdio.h>
#include<string.h>
#define arr_max 1000

int main()
{
    int m,n;
    scanf("%d",&n);
    scanf("%d",&m);
    char a[arr_max][12],b[arr_max][12];
    for(int i=0;i<n;i++)
        scanf("%s",&a[i][0]);
    for(int i=0;i<m;i++)
        scanf("%s",&b[i][0]);
    int card=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(strcmp(a[i],b[j])==0)
                card++;
    printf("%d",card);
    return 0;
}