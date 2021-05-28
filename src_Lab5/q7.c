#include <stdio.h>

int main() //7
{
    int a,b,c,d;
    
    //printf("\nEnter 4 numbers: ");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    
    int max1=b,min1=a,max2=d,min2=c;
    
    if( a > b)
    {   
        max1 = a; min1 = b;
    }
    // else
    // {
    //     max1=b;min1=a;
    // }
    if( c > d )
    {
        max2 = c;min2 = d;
    }
    if(max2 > max1)
        max1 = max2;
    if(min2 < min1)
        min1 = min2;

    printf("%d\n",max1);
    printf("%d\n",min1);
    
    return 0;
}
