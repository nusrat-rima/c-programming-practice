#include<stdio.h>
int main()
{
    int n, col, row;
    printf("enter N = ");
    scanf("%d", &n);

    for (row = 1; row <= n;row++){
        for (col = 1; col <= row;col++){
            printf("%d ", row);
        }
        printf("\n");
    }
}
/* 

1
2 2
3 3 3
4 4 4 4
*/