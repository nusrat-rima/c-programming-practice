//WAP in C number swapping using temp variable 
#include<stdio.h>
int main()
{
    int num1 = 57;
    int num2 = 33;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf(" num1= %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
    
}

