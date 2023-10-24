// decalaring and printing a matrix
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];

    printf("get inputs for matrix a");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
            printf("\na[%d][%d]= ", row, col);
            scanf("%d", &a[row][col]);
        }
    }


     printf("get inputs for matrix b");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
            printf("\nb[%d][%d]= ", row, col);
            scanf("%d", &b[row][col]);
        }
    }

     printf("\na = \n");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
             printf("%d ", a[row][col] );
        }
        printf("\n");
    }


     printf("\nmatrix b = \n");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
             printf("%d ", b[row][col]);
        }
        printf("\n");
    }


    printf("\na+b = \n");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
             printf("%d ", a[row][col] + b[row][col]);
        }
        printf("\n");
    }

        return 0;
}
