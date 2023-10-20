//WAP in C find area of a circle 
#include<stdio.h>
int main()
{

    float radius,area;
    printf("enter radius = ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("area of a circle = %.2f\n", area);
    return 0;
}