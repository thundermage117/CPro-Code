#include <stdio.h>

int main() 
{
    int a[12];

    //printf("Enter a complete UPC: ");
    for(int i=0;i<12;i++)
        scanf("%1d",&a[i]);

    int s1= a[0] +a[2] + a[4] +a[6] +a[8] +a[10];
    int s2= a[1] +a[3] + a[5]+ a[7]+ a[9];
    int s3= 3 * s1 + s2 - 1;
    int s4= 9 - s3 % 10;

    if (a[11] == s4)
        printf("VALID\n");
    else 
        printf("NOT VALID\n");

    return 0;
}
