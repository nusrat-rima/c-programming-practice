// write a program that prints all the numbers
// from 1 to 100 which is divisible by 3 or 5
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i = i + 1)
    {
        if (i%3 == 0 || i%5== 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}