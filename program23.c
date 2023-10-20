// fibonacci series -> 0 1 1 2 3 5 8 13
#include<stdio.h>
int main()
{
    int first = 0, second = 1, fibo, i,n;
    
    printf("how many fibonacci numbers do you want: ");
    scanf("%d",&n);
// 0 1
    
    for (i = 1; i <= n; i++){
        if(i<=n){
            printf("%d ",i-1);
        }else{
            fibo = first + second;
            printf("%d ", fibo);
            first = second;
            second = fibo;
        }
      
    }

    return 0;
}