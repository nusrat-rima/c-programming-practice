#include<stdio.h>
int main()
{
    int n, col, row;
    printf("enter N = ");
        scanf("%d", &n);
        for (row = n; row>= 1;row--){
            for (col = 1; col <= row;col++){
                printf("%d ", col);
            }
            printf("\n");
        }
        }
