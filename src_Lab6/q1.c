#include <stdio.h>
#define arr_max 30

int readArray(float a[]);

int main()
{
    int size;
    float a[arr_max], max=0;
    size=readArray(a);
    for(int i=0; i<size;i++)
        if(a[i]>max)
            max=a[i];
    printf("%.03f",max);
    return 0;
}

int readArray(float a[])
{
    int i=0;
    while(i<arr_max && ((scanf("%f", &a[i])==1)&&a[i]>0))
        i++;
    return i;
}