// we can use function program for prime number
#include <stdio.h>
#include <math.h>

int isPrime(int number)
{
    if (number <= 1)
    {
        return 0;
    }
    for (int i = 2; i < sqrt(number); i++)
    {
        if (number % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int number;
    printf("enter a number :");
    scanf("%d", &number); // 12

    if (isPrime(number))
    {
        printf("%d is a prime number", number);
    }
    else
    {
        printf("%d is not a prime number", number);
    }
}