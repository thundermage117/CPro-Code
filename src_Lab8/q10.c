#include <stdio.h>

int main() 
{
    int time, hour, minute, d1 = 8*60,
        d2 = 9*60+43,
        d3 = 11*60+19,
        d4 = 12*60+47,
        d5 = 14*60,
        d6 = 15*60+45,
        d7 = 19*60,
        d8 = 21*60+45;

    //printf("Enter a 24-hour time(xx:xx): ");
    scanf("%d :%d", &hour, &minute);
    time = hour * 60 + minute;

    //printf("Closest departure time is ");
    // if(time<170)
    // 	goto L1;

    if (time <= d1 + (d2 - d1) / 2)
        printf("08:00\n10:16\n");
    else if (time < d2 + (d3 - d2) / 2)
        printf("09:43\n11:52\n");
    else if (time < d3 + (d4 - d3) / 2)
        printf("11:19\n13:31\n");
    else if (time < d4 + (d5 - d4) / 2)
        printf("12:47\n15:00\n");
    else if (time < d5 + (d6 - d5) / 2)
        printf("14:00\n16:08\n");
    else if (time < d6 + (d7 - d6) / 2)
        printf("15:45\n17:55\n");
    else if (time < d7 + (d8 - d7) / 2)
        printf("19:00\n21:20\n");
    else
        printf("21:45\n23:58\n");

    return 0;
}
