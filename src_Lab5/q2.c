#include <stdio.h>

int main() //2
{
    int t1,t2;
    
    //printf("\nEnter a 24-hour time(xx:xx): ");
    scanf("%d:%d",&t1,&t2);
    
    if(t1>12)
        printf("%d:%02i PM\n",t1-12,t2);
    
    else if(t1==12)
        printf("%d:%02i PM\n",12,t2);
    
    else if(t1==0)
        printf("%d:%02i AM\n",12,t2);
    
    else
        printf("%d:%02i AM\n",t1,t2);
    
    return 0;
}
