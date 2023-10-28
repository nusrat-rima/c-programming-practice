// decalaring and printing a matrix
// multiplication of 2 matrix
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2],result[2][2],sum=0;

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

     printf("\n matrix a = \n");
    for (int row = 0; row < 2; row++){
        for (int col = 0; col < 2; col++){
             printf("%d ", a[row][col] );
        }
        printf("\n");
    }


     printf("\nmatrix a * b\n");
    for (int i = 0; i < 2; i++){ // first matrix row r1
        for (int j= 0; j < 2; j++){ // second matrix column numbers c2
             for (int k = 0; k < 2;k++){
                 sum = sum + a[i][k] * b[k][j];
             }
             result[i][j] = sum;
             printf("%d ", result[i][j]);
             sum = 0;
        }
        printf("\n");
    }


    
        return 0;
}
