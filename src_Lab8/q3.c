#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit_seen[10]={0};
    long int num[10];
    int i=0,test=0;
    
    while(scanf("%ld",&num[i])==1)
    {
        if(num[i]==0)
            break;
        i++;
    }
    int total=i;
    for(int j=0;j<total;j++)
    {
    while(num[j]>0)
    {
        digit_seen[num[j]%10]++;
        num[j]/=10;
    }
    
    for(int i=0;i<10;i++)    
    {
        if(digit_seen[i]>1)
        {
            test=1;
        }
        digit_seen[i]=0;
    }
    if(test==1)
        printf("Repeated digit\n");
    else
    {
            printf("No repeated digit\n");
    }
    
    test=0;
    }
    return 0;
}