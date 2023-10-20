// fibonacci series -> 0 1 1 2 3 5 8 13
#include<stdio.h>
int main()
{
    int first = 0, second = 1, fibo, i;
    printf("%d %d ", first, second);

    for (i = 3; i <= 100; i++){
        fibo = first + second;
        printf("%d ", fibo);
        first = second;
        second = fibo;
    }

        return 0;
}