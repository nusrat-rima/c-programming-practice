//WAP in C to calculate triangle using function
#include<stdio.h>


void areaTriangle(double b,double h)
{
    double result = 0.5 * b *h;
    printf("areaTriangle is %.1lf\n", result);
}

int main()
{
    double base, height;
    printf("enter base = ");
    scanf("%lf", &base);
    printf("enter height = ");
    scanf("%lf", &height);
    areaTriangle(base, height);
}