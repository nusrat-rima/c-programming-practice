// decalaring and printing a matrix
#include <stdio.h>
int main()
{
    int a[2][4];

    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 4; col++){
            printf("\na[%d][%d]= ", row, col);
            scanf("%d", &a[row][col]);
        }
    }


    printf("a = \n");
  
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 4; col++){
             printf("%d ", a[row][col]);
        }
        printf("\n");
    }

        return 0;
}