#include <stdio.h>

int main() //1
{
    int num;
    
    //printf("Enter a 2 digit number: ");
    scanf("%i",&num);
    
    printf("%i%i\n", num % 10, num / 10);
    
    return 0;
}
