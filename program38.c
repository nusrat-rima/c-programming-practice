#include <stdio.h>

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    printf("%d\n",add(20,30));// 50
    return 0;
}