#include <stdio.h>

int main() //6
{
    int a[12];
    
    //printf("Enter the first 12 digits of EAN: ");
    for(int i=0;i<12;i++)
        scanf("%1d",&a[i]);
    
    int s1= a[1]+ a[3]+ a[5]+ a[7]+ a[9]+ a[11];
    int s2= a[0]+ a[2]+ a[4]+ a[6]+ a[8]+ a[10];
    int s3= 3 * s1 + s2 - 1;
    int s4= 9 - ( s3 % 10 );

    printf("%d\n",s4);
    
    return 0;
}
