#include<stdio.h>
int main()
{

    int i, n, sum = 0;
    printf("enter n = ");
    scanf("%d", &n);
    for(i = 1; i <= n;i=i+2)
        {printf("%d", i);
    sum = sum + 1;}
        printf("\nsum=%d\n", sum);
        return 0;
}