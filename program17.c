//n()WAP in C number swapping without using temp variable new 
#include<stdio.h>
int main()
{

    int num1 = 57;
    int num2 = 33;
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf(" num1 = %d\n", num1);
    printf(" num2 = %d\n", num2);
    return 0;

}
