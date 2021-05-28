#include<stdio.h>

int palin(int);
int po(int, int);

int main()
{
    unsigned int m,n;
    scanf("%d %d",&m,&n);
    //printf("%d %d",palin(m),palin(n));
   unsigned int sum=0;
   for(int i=m;i<=n;i++)
   {
       if(palin(i)==1)
        sum+=i;
   }

    printf("%d",sum);

    return 0;
}

int palin(int a)
{   unsigned int t=a,s=0,i=0;
    while(a>0)
    {
        s*=10;
        s+=a%10;
        i++;
        a/=10;
    }
    if(t==s)
        return 1;
    else
    {
        return 0;
    }
    

}
int po(int a , int b)
{   unsigned int s=1;
    for(int i=0;i<b;i++)
        s*=a;
    return s;
}