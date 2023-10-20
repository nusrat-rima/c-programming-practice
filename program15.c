//WAP in C convert centigrade to farenhide
#include<stdio.h>
int main()
{
    float c, F;
    printf(" enter centigrade =");
    scanf("%f\n", &c);
    F = (c * 1.8) + 32;
    printf("farn = %.2f\n", F);
    return 0;

}