int n, col, row;
    printf("enter N = ");
    include<stdio.h>
int main()
{
    canf("%d", &n);
        for (row = 1; row <= n;row++){
            for (col = 1; col <= row;col++){
                printf("%c ", col + 64);
            }
            printf("\n");
        }
}
/*
a 
a b 
a b c
a b c d
*/