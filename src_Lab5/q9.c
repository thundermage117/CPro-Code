#include <stdio.h>

void print(int a1[],int a2[])//first one is earlier
{
	printf("%d/%d/%d\n", a1[0], a1[1], a1[2]);
}


int main() 
{
    //int d1, d2, m1, m2, y1, y2;
    int d1[3],d2[3];
    //printf("Enter first date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d1[0], &d1[1], &d1[2]);
    //printf("Enter second date (mm/dd/yy): ");
    scanf("%d /%d /%d", &d2[0], &d2[1], &d2[2]);

    if (d2[2] > d1[2])
        print(d1,d2);
    else if (d2[2] < d1[2])
        print(d2,d1);
    else if (d2[1] > d1[1])
        print(d1,d2);
    else if (d2[1] < d1[1])
        print(d2,d1);
    else if (d2[0] > d1[0])
        print(d1,d2);
    else if (d1[0] > d2[0])
        print(d2,d1);
    else
         printf("%d/%d/%.2d is equal to %d/%d/%.2d\n", d1[0],d1[1],d1[2],d1[0],d1[1],d1[2]);

    return 0;
}
