#include<stdio.h>

int main() //1
{
    int d,m,y;
    printf("\nEnter a date(mm/dd/yyyy):");
    scanf("%i/%i/%i",&m,&d,&y);
    int f=((y*100)+m)*100+d;
    printf("You entered the date %i\n",f);
    return 0;
}
