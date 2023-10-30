//area of a rectriangle
#include<stdio.h>
int main()
{
    float length, width, area;
    printf(" enter length = ");
    scanf("%f", &length);
    printf(" enter width = ");
    scanf("%f", &width);
    area = length * width;
    printf(" area of a rectriangle = %.2f\n",area);
    return 0;
}
