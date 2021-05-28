#include <stdio.h>

int main() //6
{
    int a,b;
    //printf("\n Enter two fractions separated by a plus sign:");
    scanf("%i/%i",&a,&b);
    
    int gcd=1;
    for(int i=2;i<=a&&i<=b;i++)// to simplify the fraction
        if(a%i==0&&b%i==0)
            gcd=i;
    printf("%i/%i\n",a/gcd,b/gcd);
    return 0;
}