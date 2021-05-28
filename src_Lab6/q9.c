#include <stdio.h>

int main() //8
{
    double amt=0,rate=0,monthly=0;
    int num;
    //printf("\nEnter amount of loan: ");
    scanf("%lf",&amt);
    //printf("\nEnter interest rate: ");
    scanf("%lf",&rate);
    //printf("\nEnter monthly payement: ");
    scanf("%lf",&monthly);
    //printf("\nEnter number of payments: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        amt=amt-monthly+(amt*rate/100/12);
        if(amt<0)
            amt=0;
        printf("%i: $%.2f\n",i+1,amt);
    }
    return 0;
}
