#include <stdio.h>
#define arr_max 100

int main()
{
    int num, arr[arr_max][arr_max]={0};
    scanf("%d",&num);
    int i=0,j=num/2,t=1;
    arr[i][j]=t;
    while(t<num*num)
    {
        t++;i--;j++;
        if(i<0)
            i=num-1;
        if(j==num)
            j=0;
        if(arr[i][j]!=0)
        {    i+=2;j--;
        if(i>=num)
            i-=num;
        if(j<0)
            j=num-1;
        }

        arr[i][j]=t;
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }


    return 0;
}