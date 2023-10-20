//WAP in C which prints first natural numbers and their sum 
#include<stdio.h>
int main()
{

    int count, n, sum = 0;
    printf("enter the last numbrt = ");
    scanf("%d",& n);
    for (count = 1; count <= n;count=count+1){
        if(count == n){
            printf("%d", count);
        }
        else{
            printf("%d + ", count);
        }
           
        sum = sum + count;
    }
    printf(" = %d\n", sum);
    return 0;
}