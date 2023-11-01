//String strupr and strlwr
#include<stdio.h>
int main()
{
    char string[] = "We all Love Happiness";
    strupr(string);
    printf(" Upper String = %s\n", string);//WE ALL LOVE HAPPINESS
    strlwr(string);
    printf(" Lower String = %s\n", string);// we all love happiness
    return 0;

}