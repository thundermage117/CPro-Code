#include <stdio.h>

int sum(int ab[100])
{
    int s=0;
    for(int i=90;i<130;i++)
        if(ab[i]!=0)
            s++;
    return s;
}

int main()
{
    int n,tot=0;
    char s[10000000]; int count1[130]={0},count2[130]={0};
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        scanf("%c",&s[i]);
    count1[(int) s[1]]++;
    for(int i=2;i<=n;i++)
        count2[(int)s[i]]++;
    for(int i=2;i<=n;i++)
    {
        if(sum(count1)==sum(count2))
            tot++;
        count1[(int)s[i]]++;
        count2[(int)s[i]]--;
    }
    printf("%d",tot);
    return 0;
}