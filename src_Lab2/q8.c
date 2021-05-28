#include <stdio.h>

int main()  //8
{
    float loan = 0.0f,rate = 0.0f,payment = 0.0f;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payement: ");
    scanf("%f", &payment);
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after first payement: $%.2f\n", loan);
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after second payement: $%.2f\n", loan); 
    loan = loan - payment + (loan * rate / 100.0 / 12.0);
    printf("Balance remaining after third payement: $%.2f\n", loan);
    return 0;
}
