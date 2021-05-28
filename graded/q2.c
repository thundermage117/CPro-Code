#include <stdio.h>
#include <string.h>
#define arr_max 100

int main()
{
    int n;
    char str[arr_max][arr_max],t[arr_max];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",&str[i][0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(str[j],str[j+1]) >0)
            {
                strcpy(t,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],t);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%s\n",str[i]);

    }
    return 0;
}