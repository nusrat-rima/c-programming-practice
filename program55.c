/* fibonacci series with using array*/
#include<stdio.h>
int main ()
{

    int a[50], n, i;
    printf("how many fibonacci numbers :");
    scanf("%d", &n);
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < n;i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("\n");
    for (i = 2; i < n;i++){
        printf("%d ", a[i]);
    }
}