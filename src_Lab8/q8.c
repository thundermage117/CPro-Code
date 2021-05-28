#include<stdio.h>
int rowsum(int a[][5],int);
int colsum(int a[][5], int);

int main()
{
    int i,ii,arr[5][5]={0};
    for(i=0;i<5;i++)
        for(ii=0;ii<5;ii++)
            scanf("%d",&arr[i][ii]);
    for(i=0;i<5;i++)
        printf("%d ",rowsum(arr,i));
    printf("\n");
    for(i=0;i<5;i++)
        printf("%.2f ",rowsum(arr,i)/5.0f);
    printf("\n");
    for(i=0;i<5;i++)
        printf("%.2f ",colsum(arr,i)/5.0f);
    printf("\n");
    int temp=0;
    for(ii=0;ii<5;ii++)
    {
        for(i=0;i<5;i++)
        {
            if(i==0)
                temp=arr[i][ii];
            if(arr[i][ii]>temp)
                temp=arr[i][ii];
        }
        printf("%d ",temp);
    }
    printf("\n");
    for(ii=0;ii<5;ii++)
    {
        for(i=0;i<5;i++)
        {
            if(i==0)
                temp=arr[i][ii];
            if(arr[i][ii]<temp)
                temp=arr[i][ii];
        }
        printf("%d ",temp);
    }
    return 0;
}

int rowsum(int a[][5],int x)
{   int sum=0;
    for(int i=0;i<5;i++)
        sum+=a[x][i];
    return sum;
}

int colsum(int a[][5],int x)
{   int sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i][x];
    return sum;
}