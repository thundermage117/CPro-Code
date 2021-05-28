#include <stdio.h>


int main() //6
{
    int a1,a2,b1,b2;
    printf("\nEnter two fractions separated by a plus sign: ");
    scanf("%i/%i+%i/%i",&a1,&a2,&b1,&b2);
    int c1,c2;
    c1=a1*b2+a2*b1;
    c2=a2*b2;
    int gcd=1;
    //for(int i=1;i<c1&&i<c2;i++)// to simplify the fraction
        //if(c1%i==0&&c2%i==0)
           // gcd=i;
    printf("The sum is %i/%i\n",c1/gcd,c2/gcd);
    return 0;
}
