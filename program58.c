//calculation with array
#include<stdio.h>
int main()
{
    float F[10], sum= 0.0, Avg, Min, Max;
    int i;
    printf(" numbers are :\n");
    for (i = 0; i < 10;i++){
     scanf("%f", &F[i]);
        sum = sum + F[i];
    }
    Avg = sum / 10;
    printf("Average is %.2f\n", Avg);
    Min = F[0];
    Max = F[0];
    for (i = 1; i < 10; i++)
    {
        if(Min > F[i])
            Min = F[i];

        if (Max < F[i])
            Max = F[i];
            
    }
        printf("Minimum is %.2f\n", Min);
        printf("Maximum iS %.1f\n", Max);
        return 0;
    }
