#include <stdio.h>

int main() //4
{
    int a,b,c;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%i) %i-%i",&a,&b,&c);
    printf("You entered %i.%i.%i\n",a,b,c);
    return 0;
}
