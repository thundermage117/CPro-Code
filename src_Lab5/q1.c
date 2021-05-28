#include<stdio.h>

int power(int x, int y)
{
   int prod=1;

    for(int i=0 ; i < y; i++)
        prod*=x;

    return prod;
}
int main()
{
    int num;

    //printf("\nEnter Number: ");;
    scanf("%d",&num);

    int digits=0;

    for(digits=0;;digits++)
        if(num/power(10,digits)==0)
            break;
    
    printf("%d\n",digits);

    return 0;
}
