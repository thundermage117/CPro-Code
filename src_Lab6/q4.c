#include <stdio.h>

int main()
{
    float comm, val;

    do
    {
        //printf("Enter value: ");
        scanf("%f", &val);
        if(val<=0)
            break;
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
        printf("%.2f\n", comm);

    } while (val > 0);

    return 0;
}