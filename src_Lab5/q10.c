#include <stdio.h>

int main()
{
    int grade;

    //printf("Enter numerical grade: ");
    scanf("%d", &grade);
    if(grade<0||grade>100)
        goto L1;//check if goto works in switch

    switch (grade/10) 
    {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("F\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 9: case 10:
            printf("A\n");
            break;
        default:
        L1:
            printf("out of range 0-100\n");
            break;
    }

    return 0;
}
