#include <stdio.h>

int main()
{
    float comm, val, price, rival;
    int shares;

    //printf(" Shares: ");
    scanf("%d", &shares);
    //printf("Price per share: ");
    scanf("%f", &price);

    value = shares * price;

    if (val < 2500.00f)
        comm = 30.00f + 0.017f * val;
    else if (val < 6250.00f)
        comm = 56.00f + 0.0066f * val;
    else if (val < 20000.00f)
        comm = 76.00f + 0.0034f * val;
    else if (val < 50000.00f)
        comm = 100.00f + 0.0022f * val;
    else if (val < 500000.00f) 
        comm = 155.00f + 0.0011f * val;
    else
        comm = 255.00f + 0.0009f * val;

    if (comm < 39.00f)
        comm = 39.00f;

    printf("%.2f ", comm);

    if (shares < 2000)
        rival = 33.00f + .03f * shares;
    else 
        rival = 33.00f + .02f * shares;

    printf("%.2f\n", rival);

    return 0;
}
