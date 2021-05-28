#include <stdio.h>

int po(int a, int b)
{
    unsigned long int s=1;
    for(int i=0;i<b;i++)
        s*=a;
    return s;

}
int main()
{
    unsigned long int n,test=1,t;
    scanf("%lu",&n);
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
    for(int i=0;i<32;i++)
        printf("%d",arr[31-i]);
    unsigned long int sum=0;
    for(int i=0;i<32;i++)
        sum+=arr[31-i]*po(2,i);
    printf("\n%lu",sum);
    printf("\n");

    char * b1,b2,b3,b4;
    b1=(char*)&n;
    b2=(char*)&(n+1);
    printf("%d",(int)*b2);
    
    return 0;
}