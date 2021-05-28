#include <stdio.h>

float powe(float x, int y)
{   float r=1;
    for(int i=0;i<y;i++)
        r=r*x;
    return r;
}

int main() //5
{
    float x;
    //printf("Enter x:");
    scanf("%f",&x);
    float ans=3*powe(x,5)+2*powe(x,4)-5*powe(x,3)-powe(x,2)+7*powe(x,1)-6;
    printf("%f\n",ans);
    return 0;
}
