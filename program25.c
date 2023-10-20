// 1 + 2 + 3 + 4 + 5 = 15
#include<stdio.h>
int main()

{

    int i, sum = 0;
    // printf("enter the last number = ");
    // scanf("%d", &n);
    for (i=1; i<=5;i++){
        if(i==5){
            printf("%d", i);
        }
        else{
            printf("%d + ", i);
        }
        sum = sum + i;
    }
    printf(" = %d", sum);

    return 0;
}