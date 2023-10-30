//using function for even and odd
#include <stdio.h>

void isEven(int number){
    if(number%2==0){
        printf("even\n");
    }else{
        printf("odd\n");
    }
}

int main()
{
    isEven(23);
    isEven(20);
    return 0;
}
