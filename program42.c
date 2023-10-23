#include<stdio.h>
int sum(int a, int b, int c)
{
    return  a + b - c ;
}
int main()
{
    int num1, num2,num3,result;
    printf(" enter three numbers = ");
    scanf("%d %d %d", &num1, &num2,&num3);
    result = sum(num1, num2, num3);
    printf(" the solution is : %d\n", result);
}