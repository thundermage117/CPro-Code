#include <stdio.h>

int main() //5
{
    int a[16],i=0;
    printf("Enter numbers from 1 to 16 in any order: \n");
    for(i=0;i<16;i++)
        scanf("%i",&a[i]);
    for (i=0;i<16;i++)
    {
        if(i%4==0)
            printf("\n");
        printf("%i ",a[i]);
    }
    int rowsum(int x) //int y=0) in c there is no support for default args
    {   
        int s=0;
        //if (y==0)
        for(int i=0;i<4;i++)
            s+=a[i+x];
        
        // else direct colsum
        // {
        //     for(int i=0;i<4;i++)
        //         s+=a[x+i*y]; 
        // }
        
        return s;
    }
    int colsum(int y)
    {
        int s=0;
        for(int i=0;i<4;i++)
            s+=a[y+i*4];
        return s;
    }

    printf("\nRow Sums: %i %i %i %i ",rowsum(0),rowsum(4),rowsum(8),rowsum(12));
    printf("\nColumn Sums: %i %i %i %i ",colsum(0),colsum(1),colsum(2),colsum(3));
    printf("\nDiagnol sums: %i %i\n",a[0]+a[5]+a[10]+a[15],a[3]+a[6]+a[9]+a[12]);
    return 0;
}
