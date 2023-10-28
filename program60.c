//sum of upper and lower triangle elements
#include<stdio.h>
int main()
{ 
    int A[3][3], i, j, row, col, upperSum = 0, lowerSum = 0;
    printf("\nEnter the elements for the Matrix\n");
    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("A[%d][%d] =", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nEntered Matrix\n");
    for (i = 0; i < 3;i++){
        for(j = 0; j < 3;j++){
            printf("%d", A[i][j]);
        }
    }
}

