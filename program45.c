#include<stdio.h>
int main()
{
    double base, exp, result=1,i;
    printf("enter base = ");
    scanf("%lf",&base);
    printf("enter exp = ");
    scanf("%lf", &exp);
    for (i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("solution is %.1lf\n", result);
}
/*#include<stdio.h>
int main()
{
    double base, exp;
    printf("enter base = ");
    scanf("%lf",&base);
    printf("enter exp = ");
    scanf("%lf",&exp);
    calculatePower(base,exp);
    }
void calculatePower(double base,double exp)
{
    double result = 1, i;
    for (i = 1; i <= exp;exp++){
        result = result * base;
    }
    printf("solution is %lf\n", result);
    }*/

