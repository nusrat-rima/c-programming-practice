//WAP in c to calculate and print sum,sub,mul,div pf given 2 numbers.
#include<stdio.h>
int main()
{

    int number1, number2, sum, sub, mul;
    float div;
    printf("enter the first number = ");
    scanf("%d", &number1);
    printf("enter the second number = ");
    scanf("%d", &number2);
    sum = number1 + number2;
    printf("%d + %d = %d\n", number1, number2, sum);
    sub = number1 - number2;
    printf("%d - %d = %d\n", number1, number2, sub);
    mul = number1 * number2;
    printf(" %d * %d = %d\n", number1, number2, mul);
    div = (float)number1 / number2;
    printf("%d/%d = %.2f\n", number1, number2, div);
    return 0;
} 