// 1 2 3 4 ... 100  in between prime number
#include <stdio.h>
#include <math.h>

int main()
{
    int start, end;
    printf("enter starting number :");
    scanf("%d", &start);

    printf("enter ending number :");
    scanf("%d", &end);

    for (int number = start; number <= end; number++){
        int count = 0;  

        if(number<=1){
            continue;
        }
        
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            { //
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d ",number);
        }
    }
        return 0;
}