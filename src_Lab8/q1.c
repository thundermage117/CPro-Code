#include <stdio.h>
#include <string.h>

int main()
{
    int digit_seen[10]={0};
    int num[1000];
    int i=0;
    while(scanf("%1d",&num[i])==1)
    {
        digit_seen[num[i]]++;
        i++;
    }
    for(int i=0;i<10;i++)
        if(digit_seen[i]>1)
            printf("%d ",i);
    printf("\n");
    return 0;
}