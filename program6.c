// printing even number 1 to 10
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i = i + 1)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
// 1...10
// output ->  2 4 6 8 10
