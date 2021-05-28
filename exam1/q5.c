#include<stdio.h>

double po(double x,int i)
{
    int j;
    double s=1;
    for(j=0;j<i;j++)
        s*=x;
    return s;
}

double diff(double x,int i)
{
    return ((double)i)*po(x,i-1);
}
double integ(double x,int i)
{
    return po(x,i+1)/((double)i+1);
}

int main()
{
    int test=0,i;
    scanf("%d",&test);
    do{
    int max;
    double c[10]={0},val;
    scanf("%d",&max);
    for(i=0;i<=max;i++)
        scanf("%lf",&c[i]);
    scanf("%lf",&val);
    double sum=0;
    for(i=0;i<=max;i++)
        sum+=c[i]*po(val,i);
    printf("%f ",sum);
    sum=0;
    for(i=1;i<=max;i++)
        sum+=c[i]*diff(val,i);
    printf("%f ",sum);
    sum=0;
    for(i=0;i<=max;i++)
        sum+=c[i]*integ(val,i);
    printf("%f ",sum);
    test--;
    printf("\n");
    }while(test>0);
    return 0;
}