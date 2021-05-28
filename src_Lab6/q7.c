#include<stdio.h>

int main() 
{
    int i, n, odd, square;

    scanf("%d", &n);

    for (i=1,odd=3,square=1;i<=n;square+=odd,odd+=2,i++)
        printf("%10d\n", square);
        
    return 0;
}