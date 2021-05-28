#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch[101];  
    fgets(ch,101,stdin);
    int i=0;
    int word=0, chtotal=0, up=0,down=0;
    while(ch[i]!='\n')
    {
        if(ch[i]==' ')
            word++;
        if(isupper(ch[i]))
            up++;
        if(islower(ch[i]))
            down++;
        if(ch[i]!=' '&&ch[i]!='\n')
            chtotal++;
        i++;

    }
    printf("%d\n%d\n%d\n%d",word+1,chtotal,down,up);



    return 0;
}