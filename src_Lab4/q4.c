#include <stdio.h>

int main() //4
{
    int num,arr[5]={0,0,0,0,0},i=0;
    
    //printf("\nEnter a number: ");
    
    scanf("%i",&num);
    for(i=0;num!=0;i++)
    {
        arr[i]=num%8;
        num/=8;
    }
    
    //printf("Octal number is: ");
    for(i=4;i>=0;i--)
        printf("%i",arr[i]);
    printf("\n");
    return 0;
}
