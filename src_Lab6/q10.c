#include <stdio.h>
#define max_date 3000

struct date
{
    int m,d,y;
};

int inputdate(struct date *x)
{
    scanf("%d/%d/%d",&x->m,&x->d,&x->y);
    if(x->d==0&&x->m==0&&x->y==0)
        return 0;
    else
        return 1;
    
}

int main()
{
    struct date arr[max_date],max={0};
    int i=0;
    while(inputdate(&arr[i]))
    {
        if(i==0)
            max=arr[i];
        if((arr[i].y<max.y)||( arr[i].y==max.y &&arr[i].m<max.m)||(arr[i].y==max.y&&arr[i].m==max.m&&arr[i].d<max.d))
            max=arr[i];
        i++;
    }
    printf("%d/%d/%02d is the earliest date",max.m,max.d,max.y);
    return 0;
}
