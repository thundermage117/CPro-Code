#include<stdio.h>
#include<string.h>

int main()
{
    char num[20];
    fgets(num,20,stdin);
    int sum=0;
    for(int i=0;i<strlen(num);i++)
    {
        if(num[i]>=97)
            num[i]-=32;
        switch(num[i])
        {
            case 'Q':case 'Z':
                sum+=10;break;
            case 'J':case 'X':
                sum+=8;break;
            case 'K':
                sum+=5;break;
            case 'F':case 'H':case 'V':case 'W':case 'Y':
                sum+=4;break;
            case 'D':case 'G':
                sum+=2;break;
            case 'B':case 'C':case 'M':case 'P':
                sum+=3;break;
            default:
                sum+=1;break;
        }
    }
        printf("%d",sum-1);
    return 0;
}