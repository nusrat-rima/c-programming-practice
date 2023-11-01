/* write a program that prints all the numbers
 from m to n which is divisible by 3 or 5 */
#include <stdio.h>
int main()
{
    int count,m, n;

     printf("enter m = ");
    scanf("%d", &m);

    printf("enter n = ");
    scanf("%d", &n);

    for (count = m; count <= n; count = count + 1)
    {
        if (count % 3 == 0 || count % 5 == 0)
        {
            printf("%d ", count);
        }
    }

    return 0;
}
