#include <stdio.h>
//#include <stdbool.h>

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
        printf("%2d",i);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%2d",digit_seen[i]);
    return 0;
}