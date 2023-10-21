#include<stdio.h>
int main()
{
    int n, col, row;
    printf("enter N = ");
        scanf("%d", &n);
        for (row = 1; row <= n;row++){
            for (col = 1; col <= row;col++){
                printf("%d ", row % 2);}
            printf("\n");
        }
        }
/* 
1 
0 0
1 1 1
0 0 0 0 
1 1 1 1 1 
*/
