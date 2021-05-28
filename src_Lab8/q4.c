#include<stdio.h>
#include<string.h>

int main()
{
    int arr[10],i=0;
    int size=(int) (sizeof(arr) / sizeof(arr[0]));
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    //printf("%d\n",size);
    for(i=size-1;i>=0;i--)
        printf("%d ",arr[i]);
    return 0;
}