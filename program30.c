/*
pattern related programs
n = 4
*
**
***
****
*/
#include <stdio.h>
int main()
{
    int row, col, n, count = 1;

    printf("enter n = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", count++);
        }
        printf("\n");
    }

    return 0;
}