//WAP in C  find leap year or not 
#include<stdio.h>
int main()
{
    int year;
    printf(" enter any year = ");
    scanf("%d", &year);
    if( year %400==0){
        printf(" leap year ");
    }
    else if(year %4==0 && year %100!=0){
        printf(" leap year ");
    }
    else
       printf (" not a leap year ");
    return 0;
}
