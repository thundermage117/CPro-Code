#include <stdio.h>

unsigned long int po(int a, int b)
{
    unsigned long int s=1;
    for(int i=0;i<b;i++)
        s*=a;
    return s;

}
int main()
{
    unsigned long int n,test=1,t;
    scanf("%lu",&n);//16
    int arr[32]={0};
    test=1;
    for(int i=0;i<32;i++)
    {
        if((n & test )==0)
            arr[i]=0;
        else 
            arr[i]=1;
        test = test <<1;
    }
    //b31b30...b1b0:0000000...10000
    for(int i=0;i<32;i++)
        printf("%d",arr[31-i]);
    unsigned long int sum=0;
    for(int i=0;i<32;i++)
        sum+=arr[31-i]*po(2,i);
    //prints value of reverse the bit order 134217728
    //b0b1b2...b31
    printf("\n%lu",sum);
    for(int i=0;i<4;i++)
    {
        t=arr[i];
        arr[i]=arr[7-i];
        arr[7-i]=t;
    }
    for(int i=0;i<4;i++)
    {
        t=arr[i+8];
        arr[i+8]=arr[15-i];
        arr[15-i]=t;
    }
    for(int i=0;i<4;i++)
    {
        t=arr[i+16];
        arr[i+16]=arr[15+8-i];
        arr[15+8-i]=t;
    }
    for(int i=0;i<4;i++)
    {
        t=arr[i+24];
        arr[i+24]=arr[15+16-i];
        arr[15+16-i]=t;
    }
    sum=0;
    for(int i=0;i<32;i++)
        sum+=arr[31-i]*po(2,i);
    //prints value of reverse the byte order 268435456
    //b7b6...b0b15...b8.....b31...b24
    printf("\n%lu",sum);
    return 0;
}