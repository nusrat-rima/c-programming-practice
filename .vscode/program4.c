#include<stdio.h>
int main()
{

    int number,i;
    printf("enter any number : ");
    scanf("%d", &number);
    for (i = 1; i <= 10;i=i+1)

    printf("%d x %d = %d\n", number, i, number * i);
}
