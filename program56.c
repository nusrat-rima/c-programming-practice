// linear search in array 
#include<stdio.h>
int main()
{
    int num[] = {10, 55, 34, 9, 12, 56};
    int value, pos = -1, i;
    printf("enter the value you want to see :");
    scanf("%d", &value);
    for (i = 0; i < 6;i++)
    {
        if(value==num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if(pos==-1){
        printf("the value is not found");
    }
    else{
        printf("the value is found at position %d", pos);
    }
    }