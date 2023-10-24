// sum and average of an array 
#include<stdio.h>
int main()
{
    int a [5], sum = 0, i;
    printf("enter 5 numbers = ");
    for (i = 0; i < 5;i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5;i++){
        sum = sum +a[i];
    }
    printf("sum is :%d\n", sum);
    printf("average is :%.2f\n",(float)sum/5 );
}