// write functions for addition, subtraction, multiplication, division, sqaure
#include <stdio.h>

void add(int num1, int num2)
{
    int result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
}
void sub(int num1, int num2)
{
    int result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);
}
void mul(int num1,int num2)
{
    int result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);
}
void div(int num1,int num2)
{
    int result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);
}
void square(int num1)
{
    int result = num1 * num1;
    printf("square of num1 is %d", result);
}

int main()
{
    add(20, 30);
    sub(20, 10);
    mul(30, 50);
    div(100, 2);
   
    return 0;
}