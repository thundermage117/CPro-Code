#include <stdio.h>

int main() //2,3
{ 
    float r=0;
    printf("Enter Radius: \n");
    scanf("%f",&r);
    float v=(4.0f/3.0f)*3.14f*r*r*r;
    printf("volume is:%f\n",v);
    return 0;
}
