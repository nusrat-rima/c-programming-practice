//WAP in C find the greatest among 3 numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" enter first number = ");
    scanf("%d", &num1);
    printf(" enter second number = ");
    scanf("%d", &num2);
    printf("enter third number = ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3)
    {
        printf("%d\n", num1);
    }
        else if ( num2>num1 && num2>num1){
        printf("%d\n", num2);
        }
        else if ( num3>num1 && num3> num2){
        printf("%d\n", num3);
        }
        else
        printf(" numbers are equal");
        return 0;

}