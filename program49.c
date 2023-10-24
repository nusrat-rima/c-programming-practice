// decalaring and printing a matrix
#include <stdio.h>
int main()
{
    int a[2][4] = {{10, 50, 20, 30}, {40, 20, 50, 60}};
    printf("a = \n");
  
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 4; col++){
             printf("%d ", a[row][col]);
        }
        printf("\n");
    }

        return 0;
}