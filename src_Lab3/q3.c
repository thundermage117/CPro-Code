#include <stdio.h>

int main() //3
{
    int a,b,c,d,e;
    printf("Enter ISBN: ");
    scanf("%i-%i-%i-%i-%i",&a,&b,&c,&d,&e);
    printf("GSI prefix: %i",a);
    printf("\nGroup identifier: %i",b);
    printf("\nPublisher code: %i",c);
    printf("\nItem number: %i",d);
    printf("\nCheck digit: %i\n",e);    
    return 0;
}
