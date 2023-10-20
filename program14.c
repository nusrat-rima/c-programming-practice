//WAP in C find area of a rectangle 
#include<stdio.h>
int main()
{

    float length, width, area;
    printf(" enter length = ");
    scanf("%f", &length);
    printf(" enter width = ");
    scanf("%f", &width);
    area = length * width;
    printf(" area of a rectangle = %.2f\n",area);
    return 0;
}
