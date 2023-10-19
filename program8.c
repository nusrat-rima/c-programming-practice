// write a program that prints all the numbers
// from 1 to n which is divisible by 3 or 5
#include <stdio.h>
int main()
{
    int count, n;

    printf("enter the last number = ");
    scanf("%d", &n);

    for (count = 1; count <= n; count = count + 1)
    {
        if (count % 3 == 0 || count % 5 == 0)
        {
            printf("%d ", count);
        }
    }

    return 0;
}