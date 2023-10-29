//palindrome Number
#include<stdio.h>
int main()
{
    int num, remainder, sum = 0, temp;
    printf("enter any number :");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
    {
        remainder = temp % 10;
        sum = sum * 10 + remainder;
        temp = temp / 10;
    }
    if(num==sum){
        printf("palindrome number\n");
    }
    else
        printf("it is not a palindrome number\n");
        
}