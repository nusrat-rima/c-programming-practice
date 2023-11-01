// printing hello world using nested loop in C
#include<stdio.h>
int main()
{
    int count = 1;
    for (int i = 1; i<=5; i++){
        for (int j = 1; j <= 3; j++) {
                printf("hello world : %d \n", count++);
        }
    }
    return 0;
}

/*i = 1 inner loop 3
i = 2 inner loop 3
i = 3 inner loop 3
i = 4 inner loop 3
i = 5 inner loop 3
i = 6*/

