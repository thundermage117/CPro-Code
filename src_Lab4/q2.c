#include <stdio.h>

int main() //2
{
    int num;
    
    //printf("Enter a 3 digit number: ");
    scanf("%i",&num);
    
    printf("%i%i%i\n", num % 10, ( num % 100 ) / 10, num / 100);
    
    return 0;
}
