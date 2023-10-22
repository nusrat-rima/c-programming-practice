#include <stdio.h>

int square(int num){
    int result = num * num;
    return result;
}

int main()
{
    printf("sqaure of 5 = %d\n", square(5));
    printf("sqaure of 6 = %d\n", square(6));
    return 0;
}