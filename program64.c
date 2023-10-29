//prime number
#include<stdio.h>
int main()
{
    int num, count = 0, i;
    printf("enter any positive number :");
    scanf("%d",&num);
    for (i = 2; i < num;i++){
        if(num%i==0){
            {
                count++;
                break;
            }
        }

        } 
           if(count==0)
                printf("prime Number\n");
            else
                printf("not a prime number\n");
        
}