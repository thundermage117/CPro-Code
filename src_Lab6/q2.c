#include <stdio.h>

int main()
{
    int a,b,gcd=1;
    //printf("Enter 2 Numbers: ");
    scanf("%d %d",&a,&b);

    for(int i=2;i<=a&&i<=b;i++)
        if((a%i==0 )&& (b%i==0))
            gcd=i;
    printf("%d\n",gcd);
    return 0;
}
