#include <stdio.h>
int main() //2
{
    int itemno; //m,d,y;
    float price;
    char date[12];
    printf("Enter item number: ");
    scanf("%i",&itemno);
    printf("\nEnter unit price: ");
    scanf("%f",&price);
    printf("\nEnter purchase date (mm/dd/yy) : ");
    // scanf("%i/%i/%i",&m,&d,&y);
    scanf("%s",date);
    printf("\nItem          Unit Price      Purchase date\n");
    printf("%i\t\t$ %.2f\t%s\n",itemno,price,date);
    return 0;

}
