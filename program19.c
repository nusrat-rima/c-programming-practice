//WAP in C find squareroot of any number
#include<stdio.h>
int main()
{

    int x;
    printf(" enter any number = ");
    scanf("%d",& x);
    double result = sqrt(x);
    printf("%.2f\n", result);
    return 0;
}