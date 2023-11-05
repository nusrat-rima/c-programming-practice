// factorial in loop
#include <stdio.h>
int main()
{

    int i, fact = 1, n;
    printf("enter any positive number :"); //
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {                    // 3
        fact = fact * i; // 6
    }
    printf("%d\n", fact);
    return 0;
}
