//Transpose Matrix
#include<stdio.h>
int main()
{
    int A[10][10], transpose[10][10], row, col, i, j;
    printf("enter the row and columns for the matrix :");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEntered Matrix =\n");
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
//transpose matrix
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            transpose[j][i] = A[i][j];
        }
    }

    printf("\nEntered transpose Matrix =\n");
    for (i = 0; i < col;i++){
        for (j = 0; j < row;j++){
            printf("%d ", transpose[i][j]);
                }
                printf("\n");
    }
}
