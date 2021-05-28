#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main() 
{

    int i, low_rate, num_years, month, year;
    double value[5];
    scanf("%d %d", &low_rate, &num_years);
    printf("Years");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("%3d    ", year);
        for (i = 0; i < NUM_RATES; i++) {
            for (month = 1; month <= 12; month++)
                value[i] *= (double) ((low_rate + i) / 12.0 / 100.0 + 1.0);
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}