// Factorial Using Recursion
#include<stdio.h>
int main()
{
    int result = fact(4);
    printf("the factorial of 4 is %d", result);
}
int fact (int n){
    if (n==1)
        return 1;
        else
        return n * fact(n - 1);
}