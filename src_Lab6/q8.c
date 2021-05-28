#include<stdio.h>

int main()
{
    int i, days, start;
    scanf("%d",&days);
    scanf("%d",&start);//sun=1
    for(i=1;i<start;i++)
        printf("   ");
    for(i=1;i<=days;i++)
    {
        printf("%3d",i);
        if((start+i-1)%7==0)
            printf("\n");
    }
    return 0;
}